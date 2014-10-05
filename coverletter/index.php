<?php

include("../string_lib/coverletter_stringlib.php");

?><html>
  <head>
    <title>coverletter</title>
    <link rel="stylesheet" type="text/css" href="../style/rc.css">
</head>
  <body>

    <div id="page">
      <a href="../resume/index.php">Resume</a> | <a href="../index.php">Home</a>
      <div id="from_me"><?php my_name(); ?></div>
      <div id="contact_info"><?php contact_info(); ?></div>
      <hr>
      <div><?php today(); ?></div>
      <br>
      <div><?php hir_mgr(); ?></div>
      <br>
      <div>
        Dear <?php hir_mgr_name(); ?>,
      </div>
      <br>
      <div>
        I am writing to express my keen interest in <?php position(); ?> 
        as mentioned on <?php posting_place(); ?>. 
        <!-- I am writing to express my keen interest in the <?php position(); ?> position you have posted on <?php posting_place(); ?>. --> 

        I am confident that my education, experience, and qualifications make me a strong candidate
<!--         for this position.   -->
				to be a team member of your store.
				
        I am a highly-motivated, hard-working, energetic individual 

        with a passion for <?php area(); ?>, and I believe that my skills and abilities will prove to be an asset to <?php company_name(); ?>.  
      </div>
      <br>
      <div>
        I am a person who <?php understanding(); ?> and I am enthusiastic to increase my knowledge and develop new skills in this area. 

        Through my previous work experience I have developed <?php skills_developed(); ?>. 

        My personal values of integrity, self-motivation, accountability, attention to detail, and commitment to quality workmanship have made me a desirable asset with all my previous employers. 

        <!-- Through my training in the Computer Programming & Analysis program at Seneca, I have developed a variety of programming skills including <?php relevant_skills(); ?>.  -->

        As a dedicated member of <?php company_name(); ?>, I would bring new ideas and energy and I am confident that I would be an effective team member. 
      </div>
      <br>
      <div>
        I look forward to the opportunity to meet with you to discuss how my skills, training and enthusiasm can contribute to the objectives of <?php company_name(); ?>.  

        Please do not hesitate to contact me <?php means_of_contact(); ?>.  Thank you for your time and consideration.
      </div>
      <br>
      <div>
        Sincerely,
      </div>
      <br>
      <div>
        <div><?php my_name(); ?></div>
      </div>
    </div>
  </body>
  
</html>


