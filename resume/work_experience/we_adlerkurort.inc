<?php 

function ak_pos_name(){
  $x = "Hotel Manager Assistant";
  print $x;
}

function ak_name(){
  $x = "AdlerKurort, Sochi, Russia";
  print $x;
}

function ak_time(){
  $x = "May 2001 - Oct 2002";
  print $x;
} 

?>
<div class="table">
  <div class="occ_name_time">
    <div class="occ_name"><?php ak_pos_name(); ?></div>
    <div class="occ_time"><?php ak_time(); ?></div>
  </div>
</div>
<div>
  <div colspan="2"><?php ak_name(); ?></div>
</div>


<?php
  include ("we_adlerkurort_achiev.inc");
?>
  