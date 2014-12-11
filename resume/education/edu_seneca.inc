<?php

function seneca_cert_name(){
  $x = "Computer Programming and Analysis Co-op Diploma";
  print $x;
}

function seneca_name(){
  $x = "Seneca College, Toronto, ON (expected to graduate: December 2014)";
  print $x;
}

function seneca_time(){
  //$x = "2011 - current";
  $x = "2011 - present";
  print $x;
}

?>

<div class="table">
  <div class="occ_name_time">
    <div class="occ_name"><?php seneca_cert_name(); ?></div>
    <div class="occ_time"><?php seneca_time(); ?></div>
  </div>
</div>
<div>
  <div colspan="2"><?php seneca_name(); ?></div>
</div>

<?php
  include ("edu_seneca_prj.inc");
?>
  