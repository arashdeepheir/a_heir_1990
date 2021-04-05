<?php

$myfile = fopen("page1.html", "w") or die("Unable to open file!");
$txt1 = sscanf($str,"firstname:%d",$firstname);
fread($myfile, $txt1);
$txt2 = sscanf($str,"lastname:%d",$lastname);
fread($myfile, $txt2);
$txt3 = sscanf($str,"password:%d",$password);
fread($myfile, $txt3);

$form=array("firstname","lastname","password");
echo count($form);
echo fread($myfile);
echo fwrite($myfile);
//fclose($myfile);

?>