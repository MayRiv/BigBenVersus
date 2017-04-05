<?php getView("HeaderView.inc", null); ?>
<div id="feed">
	<p>Рейтинг игроков</p>
	<table class="table_dark">
		<tr><th>#</th><th>Игрок</th><th>Очки</th></tr>
		<?php
			$i=1;
			foreach ($obj as $player) {
				echo "<tr><td>".$i."</td><td>".$player['Nick']."</td><td>".$player['SkillRating']."</td></tr>";
				$i++;
			}
		?>
	</table>
</div>
<?php getView("Footer.inc", null); ?>
</body>
