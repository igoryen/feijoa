<?php


function china_concise(){
  $x = "Increased academic progress by developing new methodology "
          . "and improving the existing ones.";
  print "<li>" . $x . "</li>";
}

function curriculum_improver(){
  $x = "Improved and adapted old curriculum"; 
  print "<li>" . $x . "</li>"; 
}

function methodologist(){
  $x = "Developed a new original teaching methodology that significantly "
          . "increased academic progress"; 
  print "<li>" . $x . "</li>";
}

function demystifier(){
  $x = "Demystified laws of learning language to beginners";
  print "<li>" . $x . "</li>";
}

 
?>

<ul>
  <?php
    curriculum_improver();
    methodologist();
    //demystifier();
  ?>
</ul>
