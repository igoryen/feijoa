<?php

function arts_cert_name(){
  $x = "Certificate in Fine Arts";
  print $x;
}

function arts_name(){
  $x = "Adler School of Fine Arts, Sochi, Russia";
  print $x;
}

function arts_time(){
  $x = "1986-1990";
  print $x;
}


?>
<div class="table">
  <div class="occ_name_time">
    <div class="occ_name"><?php arts_cert_name(); ?></div>
    <div class="occ_time"><?php arts_time(); ?></div>
  </div>
</div>
<div>
  <div class="occ_place"><?php arts_name(); ?></div>
</div>


 
  