<?php

function bl_pos_name(){
  $x = "";
  print $x;
}

function bl_name(){
  $x = "bla";
  print $x;
}

function bl_time(){
  $x = "bla";
  print $x;
}

?>
<div class="occ_name_time">
  <div class="occ_name"><?php bl_pos_name(); ?></div>
  <div class="occ_time"><?php bl_time(); ?></div>
</div>
<div class="occ_place"><?php bl_name(); ?></div>

  