<?php getView("HeaderView.inc", null); ?>
<div id="feed">
	<p>Кто играет сильнее?</p>
	<table>
	<tr>
		<th><?=$obj[0]["Nick"]?></th>
		<th><?=$obj[1]["Nick"]?></th>
	</tr>
	<tr>
		<th><?php echo "<a href='/Choose/?winner=".$obj[0]["Id"]."&loser=".$obj[1]["Id"]."'><img src='/images/".$obj[0]["Id"].".jpg'/></a>"?></th>
		<th><?php echo "<a href='/Choose/?winner=".$obj[1]["Id"]."&loser=".$obj[0]["Id"]."'><img src='/images/".$obj[1]["Id"].".jpg'/></a>"?></th>
	<th>
	</table>
</div>
<?php getView("Footer.inc", null); ?>
</body>
