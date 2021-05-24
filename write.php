<?php
$myfile = fopen("page1.html", "w") or die("Unable to open file!");
$str="mobileno";
$txt1 = sscanf($str,"mobileno:%d",$mobileno);
fwrite($myfile, $txt1);
$form=array("mobileno");
echo count($form);
echo fread($myfile,"10");
echo fwrite($myfile,$txt1);
fclose($myfile);
?>