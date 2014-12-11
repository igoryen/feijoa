<?php
  function ccs_pos_name(){
    $x = "Manager of Youth Services";
    print $x;
  }

  function ccs_name(){
    $x = "Calvary Chapel Church, Sochi, Russia";
    print $x;
  }
  
  function ccs_time(){
    $x = "Mar 2002 - May 2006";
    print $x;
  } 

?>
<div class="table">
  <div class="occ_name_time">
    <div class="occ_name"><?php ccs_pos_name(); ?></div>
    <div class="occ_time"><?php ccs_time(); ?></div>
  </div>
</div>
<div>
  <div colspan="2"><?php ccs_name(); ?></div>
</div>

<?php
  include ("we_ccs_achiev.inc");
?>
  