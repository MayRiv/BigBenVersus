<!DOCTYPE html>
<html>
<head>
<title>BigBen Versus</title>
<link href="/css/bootstrap.css" rel='stylesheet' type='text/css' />
<!-- Custom Theme files -->
<link href="/css/style.css" rel="stylesheet" type="text/css" media="all" />
<!-- Custom Theme files -->
<script src="/js/jquery.min.js"></script>
<!-- Custom Theme files -->
<meta name="viewport" content="width=device-width, initial-scale=1">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta name="keywords" content="Superminimal Ui Kit Responsive web template, Bootstrap Web Templates, Flat Web Templates, Andriod Compatible web template, 
Smartphone Compatible web template, free webdesigns for Nokia, Samsung, LG, SonyErricsson, Motorola web design" />
<script type="application/x-javascript"> addEventListener("load", function() { setTimeout(hideURLbar, 0); }, false); function hideURLbar(){ window.scrollTo(0,1); } </script>
<!--webfont-->
<link href='http://fonts.googleapis.com/css?family=Montserrat:400,700' rel='stylesheet' type='text/css'>
<link href='http://fonts.googleapis.com/css?family=Lato:100,300,400,700,900,100italic,300italic,400italic,700italic,900italic' rel='stylesheet' type='text/css'>
 <!-- start equalizer -->		  
<link href="/css/jquery-ui.css" rel="stylesheet" type="text/css" media="all" />
<script src="/js/jquery-ui.min.js"></script>

</head>
	
<body> 
<div class="container"> 
<div class="header text-center"> 
<h1><a href="/Compare/">MAFIA VERSUS</a></h1> 
<h1><a href="/Rating/">RATING</a></h1> 
<p></p> 
</div> 
<div class="main-content"> 
<div class="col-md-12"> 
<div>



<?php
			$i=1;
			foreach ($obj as $player) {
				echo "<p>".$player['Nick']."</p>";
				$i++;
			}
?> 

</div> 
</div> 
</div> 
<div class="footer"> 
<div class="copy-rights text-center"> 
<p> Copyright &copy;2016 All rights Reserved</p> 
</div> 
</div> 
</div> 
</body>
<? getView("FooterView.inc",null);?>
</html>