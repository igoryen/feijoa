<?php

function ccs_concise(){
  $x = "Significantly expanded services and increased membership; "
          . "organized, oversaw, trained and coordinated six teams "
          . "of 5 individuals each; developed a new curriculum, "
          . "translated a TV film.";
  print "<li>" . $x . "</li>";
}

function pioneer_ccs(){
  $x = "Pioneered two new departments which helped expand services "
          . "and increase membership";
  print "<li>" . $x . "</li>";
}

function manager_ccs(){
  $x = "Organized, oversaw, trained and coordinated six teams "
          . "of 5 individuals each";
  print "<li>" . $x . "</li>";
}

function author_ccs(){
  $x = "Developed a new curriculum and produced teaching CD's";
  print "<li>" . $x . "</li>";
}

?>

<ul>
  <?php
    pioneer_ccs();
    manager_ccs();    
    author_ccs();
  ?>
</ul>