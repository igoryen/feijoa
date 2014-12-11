<?php

function celta_cert_name(){
  $x = "Certificate in Teaching English to Adults (CELTA)";
  print $x;
}

function celta_joint_name(){
  $x = "Language Link, Beijing, China";
  print $x;
}

function celta_time(){
  $x = "Oct - Nov 2007";
  print $x;
}

?>
<div class="table">
  <div class="occ_name_time">
    <div class="occ_name"><?php celta_cert_name(); ?></div>
    <div class="occ_time"><?php celta_time(); ?></div>
  </div>
</div>
<div>
  <div class="occ_place"><?php celta_joint_name(); ?></div>
</div>


  