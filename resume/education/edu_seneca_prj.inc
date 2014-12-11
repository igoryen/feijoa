<?php
function phrase_watch(){
  $x = "Developed Tarboz - an online application using Apache, "
          . "MySQL, PHP and jQuery/HTML5 for storing winged phrases "
          . "in several languages";
  print "<li>" . $x . "</li>";
}

function asp_net(){
  $x = "Developed a database-driven web application in C# using "
          . "ASP.NET MVC4 in Visual Studio that kept records of "
          . "a college's faculty and students and notified them "
          . "of classes' cancellations";
  print "<li>" . $x . "</li>";
}

function android(){
  $x = "Developed a database-driven Android application for drivers "
          . "to track gas purchases by gas station";
  print "<li>" . $x . "</li>";
}

function surplus(){
  $x = "Surplus: an online store website using Apache, MySQL and PHP";
  print "<li>" . $x . "</li>";
}

function mama_pizza(){
  $x = "MamaPizza: an online store order web page for an online store "
          . "with JavaScript validation";
  print "<li>" . $x . "</li>";
}

function sencon(){
  $x = "SenCon: a Construction Projects Maintenance Program written "
          . "in COBOL on IBM i-Series server with CRUD database "
          . "functionality and the create-print summary reports feature.";
  print "<li>" . $x . "</li>";
}
?>

<div class="projects">Projects</div>
<div class="prj_list">
  <ul>

<?php
    phrase_watch();
    asp_net(); 
    android();
    // surplus();
    // mama_pizza();
    // sencon();
?>
  </ul>
</div>
