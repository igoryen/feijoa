<?php

  function herzen_cert_name(){
    $x = "5-Year Diploma in Teaching English and German";
    print $x;
  }

  function herzen_name(){
    $x = "Sochi State University, Sochi, Russia";
    print $x;
  }
  
  function herzen_time(){
    $x = "1993-1998";
    print $x;
  }

?>
<div class="table">
  <div class="occ_name_time">
    <div class="occ_name"><?php herzen_cert_name(); ?></div>
    <div class="occ_time"><?php herzen_time(); ?></div>
  </div>
</div>
<div>
  <div class="occ_place"><?php herzen_name(); ?></div>
</div>



  
  