<?php
function area(){
  print "customer service and work with people";
}
function contact_info(){
  print "2980 Don Mills Rd, apt 102, North York, ON, M2J 3B9 &bull; 647-703-6200 &bull; igor.entaltsev@gmail.com";
}
function company_name(){
  $x = "IKEA";
  print $x;
}
function hir_mgr(){
  $x = "Hiring Manager<br>IKEA<br>North York";
  print $x;
}
function hir_mgr_name(){
  $x = "Hiring Manager";
  print $x;
}
function means_of_contact(){
  $x = "by phone at (647) 703-6200 or by email at igor.entaltsev@gmail.com";
  print $x;
}
function my_name(){
  $my_name = "Igor Entaltsev";
  print $my_name;
}
function position(){
  $x = "Kitchen Planning Sales position";
  print $x;
}
function posting_place(){
  //$x = "Seneca coop website";
  $x = "the IKEA website";
  print $x;
}
function relevant_skills(){
  $x = "**relevant_skills**";;
  print $x;
}
function skills_developed(){
  $x = "leadership skills and the ability to work with people on all levels";
  print $x;
}
function today(){
  date_default_timezone_set('UTC');
  $date = date('F j, Y');
  print $date;
}
function understanding(){
  $x = "understands the importance of customer satisfaction";
  print $x;
}