<?php

function ch_pos_name(){
  $x = "Teacher of English as a Second Language";
  print $x;
}

function ch_name(){
  $x = "Heilongjiang EEC Institute, Caree Sunshine School, Harbin, China";
  print $x;
}

function ch_time(){
  $x = "Feb 2008 - Jul 2010";
  print $x;
}

?>
<div class="table">
  <div class="occ_name_time">
    <div class="occ_name"><?php ch_pos_name(); ?></div>
    <div class="occ_time"><?php ch_time(); ?></div>
  </div>
</div>
<div>
  <div colspan="2"><?php ch_name(); ?></div>
</div>

<?php
  include ("we_china_achiev.inc");
?>
  