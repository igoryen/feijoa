<?php
include("../string_lib/resume_stringlib.php");
?><html>
  <head>
    <link rel="stylesheet" type="text/css" href="../style/rc.css">
  </head>
  <body>

    <div id="page">
      <a href="../coverletter/index.php">Cover Letter</a> | <a href="../index.php">Home</a>
      <div id="my_name">Igor Entaltsev</div>
      
<?php
          include ("./lines/address.inc");
?>
      
      <hr>
<?php
        include ("./lines/objective.inc");
        include ("./qualifications/highlights.inc");
        include ("./technical_skills/tech_skills.inc");
        include ("./work_experience/work_experience.inc");
        include ("./education/education.inc");
        // include ("./other/achievements.inc");
        // include ("./other/volunteer.inc");
        // include ("./other/interests.inc");
?>

    </div>
  </body>
</html>


