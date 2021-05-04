<?php
$myfile = fopen("page1.html", "w") or die("Unable to open file!");
$txt1 = sscanf($string,"mobileno:%d",$mobileno);
fwrite($myfile, $txt1);
$form=array("mobileno");
echo count($form);
echo fread($myfile);
echo fwrite($myfile);
fclose($myfile);
?>