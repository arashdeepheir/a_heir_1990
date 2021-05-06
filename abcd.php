<?php

$myfile = fopen("page.html", "w") or die("Unable to open file!");
$str1="firstname";
$str2="lastname";
$str3="password";
$str4="gstin";
$txt1 = sscanf($str1,"firstname:%d",$firstname);
fwrite($myfile, $txt1);
$txt2 = sscanf($str2,"lastname:%d",$lastname);
fwrite($myfile, $txt2);
$txt3 = sscanf($str3,"password:%d",$password);
fwrite($myfile, $txt3);
$txt4 = sscanf($str4,"gstin:%d",$gstin);
fwrite($myfile, $txt1,$txt2,$txt3,$txt4);

$form=array("firstname","lastname","password","gstin");
echo count($form);
echo fread($myfile);
echo fwrite($myfile);
fclose($myfile);

?>