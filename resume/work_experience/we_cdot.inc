<?php

function cdot_pos_name(){
  $x = "Research Assistant - Web Developer";
  print $x;
}

function cdot_name(){
  $x = "Seneca's Centre for Development of Open Technology "
          . "(Co-op position)";
  print $x;
}

function cdot_time(){
  $x = "May 2013 - Dec 2013";
  print $x;
} 

?>

<div class="table">
  <div class="occ_name_time">
    <div class="occ_name"><?php cdot_pos_name(); ?></div>
    <div class="occ_time"><?php cdot_time(); ?></div>
  </div>
</div>
<div>
  <div colspan="2"><?php cdot_name(); ?></div>
</div>
<?php
  include ("we_cdot_achiev.inc");
?>
  