<?php
class System 
{
	private static $_instance;
	public $lastMonthEnd = '2016-4-13';
	public static  function getInstance()
	{
		if (System::$_instance == null) System::$_instance = new System();
		return System::$_instance;
	}

	private function __construct()
	{
		# code...
	}
	public function Rating()
	{
		$players = SQL("SELECT * FROM Players ORDER BY SkillRating DESC limit 25")->getAll();
		getView("RatingView.inc", $players);
	}
	public function Compare()
	{
		$players = SQL("SELECT * FROM Players ORDER BY RAND() LIMIT 10")->getAll();
		getView("CompareView.inc", $players);
	}
	public function Choose()
	{
		if (isset($_GET['winner']) && isset($_GET['loser']))
		{
			$winner = SQL("select SkillRating from Players where Id=?", array($_GET['winner']))->getAll();
			$loser = SQL("select SkillRating from Players where Id=?", array($_GET['loser']))->getAll();
			if (isset($winner) && isset($loser))
			{
				$E_winner = 1 / (1 + pow(10, ($loser[0]['SkillRating'] - $winner[0]['SkillRating'])/400));
				$E_loser  = 1 / (1 + pow(10, ($winner[0]['SkillRating'] - $loser[0]['SkillRating'])/400));


				$winner_rank = $winner[0]['SkillRating'] + 10 * (1 - $E_winner);
				$loser_rank  = $loser[0]['SkillRating']  + 10 * (0 - $E_loser);

				SQL("Update Players SET SkillRating=? where id=?", array($winner_rank, $_GET['winner']));
				SQL("Update Players SET SkillRating=? where id=?", array($loser_rank, $_GET['loser']));
			}
		}
		header("Location: /Compare/");
		

	}
	public function ListPlayers()
	{
		$players = SQL("Select Nick from Players")->getAll();
		getView("ListPlayersView.inc", $players);
	}
	public function AddPlayer()
	{
	}
}

?>
