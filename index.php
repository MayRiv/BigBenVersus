<?php
	require("viewer.inc");
	require("DBManager.inc");
	require_once("System.inc");
	require("Config.inc")
	DBManager::getInstance()->connect($host, $dbName, $user, $password);
	session_start();
	$url = $_SERVER['REQUEST_URI'];
  	$url = rtrim($url, '/');
  	$parsed = explode('/', $url);
  	if(count($parsed) > 1 && method_exists('System', $parsed[1]))
  		$method = $parsed[1];
  	else
  		$method = "Compare";
	System::getInstance()->$method();

?>
