<?php
function sot_pos_name(){
  $x = "Teacher";
  print $x;
}

function sot_name(){
  $x = "The International School Of Tomorrow, Sochi, Russia";
  print $x;
}

function sot_time(){
  $x = "Sep 1998 - Jul 2000";
  print $x;
} 

?>


<div class="occ_name_time">
  <div class="occ_name"><?php sot_pos_name(); ?></div>
  <div class="occ_time"><?php sot_time(); ?></div>
</div>
  <div class="occ_place"><?php sot_name(); ?></div>


<?php
  include ("we_sot_achiev.inc");
?>
  