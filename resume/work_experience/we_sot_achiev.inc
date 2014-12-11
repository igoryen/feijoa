<?php 

function sot_general(){
  $x = "Efficiently taught three elementary school courses; "
          . "translated a multi-volume school curriculum.";
  print "<li>" . $x . "</li>";
}

function sot_detailed(){
  $a = "<li>";
  $b = "</li>";
  $routine = "Taught three elementary school courses; made one course "
          . "more attractive to students; prepared weekly reports; "
          . "provided translation services";  
  $transl = "Made a Russian translation of a multi-volume "
          . "Sunday school curriculum";
  print $a . $routine . $b . $a . $transl . $b;
}


?>
<ul>
  <?php
    //sot_general();
    sot_detailed();
  ?>
</ul>
