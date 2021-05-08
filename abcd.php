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
fwrite($myfile,$txt1);
fwrite($myfile,$txt2);
fwrite($myfile,$txt3);
fwrite($myfile,$txt4);

$form1=array("firstname");
$form2=array("lastname");
$form3=array("password");
$form4=array("gstin");
echo count($form1);
echo count($form2);
echo count($form3);
echo count($form4);

echo fread($myfile,$txt1);
echo fread($myfile,$txt2);
echo fread($myfile,$txt3);
echo fread($myfile,$txt4);

fclose($myfile);

?>