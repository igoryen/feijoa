<div  class="bar">HIGHLIGHTS OF QUALIFICATIONS</div>
<div class="highlights">
  <ul>
    <?php

    /*
  http://www.businessbee.com/resources/sales/5-traits-good-data-analyst/
  */

  function analysis(){
    // Palomino (141014tu)
    // $x = "Curious, research-loving, fascinated with complex systems analysis as demonstrated by the knowledge of the grammars of more than a dozen languages";
    // print "<li>" . $x . "</li>";
    //---------------------------------------------
    /*
    $x = "Fascinated with complex systems analysis as demonstrated by the knowledge of the grammars of more than a dozen languages";
    print "<li>" . $x . "</li>";
    */
    //--- generic ---------------------------------
    $adj = "Detail-oriented ";
    $skill= "analyst: ";
    $expl = "Curious, research-loving, fascinated with complex systems' "
            . "analysis and optimization as demonstrated by the knowledge "
            . "of the grammars of more than a dozen languages";
    print "<li>" 
            //. "<b>" . $adj . $skill . "</b>" 
            .  $expl . "</li>";
  }

  function communication(){
    $x = "";
    $parts = array();
    array_push($parts, "clear and concise speaker");
    array_push($parts, "always representing facts"); 
    array_push($parts, "attentive listener as demonstrated by having "
            . "effectively managed numerous teams");
    $x = implode(", ", $parts );
    $x = ucfirst($x);
    print "<li>" . $x. "</li>";
    //---------------------------------------------------
    /*
    $adj = "Clear ";
    $skill= "communicator: ";
    $expl = "clear and concise speaker, always representing facts, attentive listener as demonstrated by having effectively managed numerous teams";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
    */
  }


  function computer_networking(){
    $x = "Experience using various Internet protocols including TCP, UDP, FTP, "
            . "gained from working on various projects at college";
    print "<li>" . $x . "</li>";
  }

  
  function cs_development(){
    $x = "Developed a database-driven web application in C# "
            . "using ASP.NET MVC4 in Visual Studio that kept records "
            . "of a college's faculty and students and notified them "
            . "of classes' cancellations";
    print "<li>" . $x. "</li>";
  }
  

  // IKEA kitchen planning sales - 141005
  function customer_service(){
    $adj = "Thoughtful ";
    $skill= "in customer service: ";
    $expl = "experienced in hospitality industry, oriented at the highest "
            . "customer satisfaction, proactive and courteous toward customers";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function documentation(){
    $x = "Strong advocate of producing proper documentation for any "
            . "and all code; created user manuals for several projects "
            . "both at previous positions and in college";
    print "<li>" . $x. "</li>";
  }

  function data_bases(){
    $x = "Strong knowledge of SQL as demonstrated in designing and "
            . "implementing a large database-driven web application "
            . "using MySQL, Apache and PHP";
    print "<li>" . $x . "</li>";
  }

  function editing(){
    $adj = "Good ";
    $skill= "editor: ";
    $expl = "good writer and researcher, critical thinker: compiled and "
            . "authored teaching materials for a wide range of readers";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function front_end_development(){
    $x = "Developed multiple projects using HTML5, CSS, XML, JavaScript "
            . "and jQuery geared to work properly in different web browsers";
    print "<li>" . $x . "</li>";
  }

  // !!! a quality, not a skill
  function hard_work(){
    $adj = "Energetic ";
    $skill= "worker: ";
    $expl = "tenacious, self-motivated, success-oriented, ethical and "
            . "conscientious as demonstrated by putting in 120% in all previous positions";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function learning(){
    $adj = "Devoted ";
    $skill= "continuous learner: ";
    $expl = "tenacious, self-motivated, success-oriented, committed to "
            . "constantly expanding the personal arsenal of skills "
            . "through self-teaching and self-education";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function listening(){
    $adj = "Attentive ";
    $skill= "listener: ";
    $expl = "concentrating on another person's message, tactful, "
            . "empathetic and objective as demonstrated by being "
            . "successful in work with people in previous positions";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";

  }

  function managing(){
    // $skill = "Open and transparent, leading by example, able to multitask and prioritize, as demonstrated by supervising a staff of 40 people as well as having effectively organized, overseen, trained and coordinated 6 teams of 5 individuals each";
    // print "<li>" . $skill . "</li>";
    //------ generic --------------------------------------
    $adj = "Experienced ";
    $skill= "manager and organizer: ";
    $expl = "Open and transparent, " .
            "leading by example, " .
            "able to multitask and prioritize, ".
            //"creative, ".
            //"flexible, ".
            //"and altruistic, ".
            "as demonstrated by supervising a staff of 40 people "
            . "as well as having effectively organized, overseen, "
            . "trained and coordinated 6 teams of 5 individuals each";
    print "<li>" 
            //. "<b>" . $adj . $skill . "</b>" 
            .  $expl . "</li>";
    //-----------------------------------------------------
  }

  function multicultural(){
    $adj = "Multicultural ";
    $skill= "experience: ";
    $expl = "understanding and respecting people of other cultures "
            . "as demonstrated by having lived and worked for 2 years "
            . "abroad, and being an effective project team leader of "
            . "a culturally diverse group of students at college";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function organizing(){
    $adj = "Excellent ";
    $skill= "organizer: ";
    $expl = "creative, tenacious, flexible, and altruistic as demonstrated "
            . "by having effectively organized, overseen, trained and "
            . "coordinated six teams of 5 individuals each";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function php_development(){
    $x = "Designed and implemented a database-driven web application that "
            . "used MySQL, Apache and PHP to store and search for "
            . "winged phrases in multiple languages";
    print "<li>" . $x . "</li>";
  }

  function problem_solving(){
    $x = "Always quality-oriented, result-driven, and possess "
            . "problem solving skills: have a \"can do\" attitude, "
            . "able to re-define a problem, seek permanent solutions, ";
    print "<li>" . $x. "</li>";
  }

  function project_lead(){
    $x = "Served as a project lead in charge of a team of 3 people "
            . "working on a major project (a database-driven web application) "
            . "at college";
    print "<li>" . $x. "</li>";
  }

  /*
  https://www.hackerschool.com/blog/27-fundamental-qualities-of-good-programmers
  http://www.cssp.com/CD0808b/CriticalStrategicThinkingSkills/
  */
  function programming(){
    // $x = "An intermediate level of coding, technical and time management skills developed through work on various projects during the 3-year program in college";
    // print "<li>" . $x . "</li>";
    /*
    // for SyncBASE 141006
    $x = "Energetic, " .
          "result-oriented, " .
          "experienced in object oriented development and design, " .
          //"comfortable with algorithmic thinking, " .
          //"able to structure code well, " .
          "passionate about web development and data processing";
    $title = "Being comfortable with algorithmic thinking means 
      * having good intuition for how to store and manipulate your data, 
      * being able to think both iteratively and recursively, and 
      * being able to reason about the performance characteristics of the code you write.";
    
    print "<li title=\" $title\">" . $x . "</li>";
    */
    // --------- generic ---------------------
    $adj = "Enthusiastic ";
    $skill= "programmer: ";
    $expl = array();
    array_push($expl, "energetic");
    array_push($expl, "result-oriented");
    array_push($expl, "experienced in object-oriented development and design");
    array_push($expl, "comfortable with algorithmic thinking");
    array_push($expl, "able to structure code well");
    array_push($expl, "passionate about web development and data processing");
    $expl = implode(", ", $expl); // схлопнуться, сложиться
    $expl = ucfirst($expl);
    
    $title = "Being comfortable with algorithmic thinking means 
    * having good intuition for how to store and manipulate your data, 
    * being able to think both iteratively and recursively, and 
    * being able to reason about the performance characteristics 
    of the code you write.";
    
    print "<li title=\" $title\">" 
            //. "<b>" . $adj . $skill . "</b>" 
            .  $expl . "</li>";  
  }

  // used for Palomino 141005
  function seneca_student(){
    $x = "Currently enrolled in the Computer Programming and Analysis "
            . "Co-op Diploma; expected completion December 2014";
    print "<li>" . $x . "</li>";
  }

  function server_side_scripting(){
    $x = "Developed server-side scripts in PHP to create a database-driven "
            . "web application that uses Apache and MySQL database to "
            . "store and search for winged phrases in multiple languages; "
            . "as well worked on codebase written in server-side JavaScript "
            . "on Node.js";
    print "<li>" . $x . "</li>";
  }

  // used for Palomino 141005
  function software_development(){
    //---generic-----------------------------------
    $adj = "Advancing ";
    $skill = "software developer: ";
    $expl = "Designed and implemented a number of database-driven "
            . "web applications both independently and within a group";
    print "<li>"
            //."<b>" . $adj . $skill . "</b>" 
            .  $expl."</li>";
    //---------------------------------------------
    // // for SyncBASE 141006
    // $x = "Enjoy being active in all phases of the systems development life cycle as demonstrated in the development of the college group project";
    // print "<li>".$x."</li>";
    //---------------------------------------------
    //for SyncBASE 141005
    // $x = "Designed and implemented a database-driven web application that uses Apache, MySQL and PHP to store and search for winged phrases in multiple languages";
    // print "<li>" . $x . "</li>";
    //---------------------------------------------
    // $adj = "Advancing ";
    // $skill = "software developer: ";
    // $expl = "enjoy being active in all phases of the systems development life cycle as demonstrated in the development of the college group project";
    // print "<li>"."<b>" . $adj . $skill . "</b>" .  $expl."</li>";
  }
  
  //http://www.inc.com/paul-schoemaker/6-habits-of-strategic-thinkers.html
  function strategic_thinking(){
    $adj = "Advancing ";
    $skill = "strategic thinker: ";
    $expl = "able to see the big picture, conceptualize complexity, "
            . "think critically, "
            . "synthesize information from many sources "
            . "before making a decision "
            . "as practiced in major life decisions";
    print "<li>"."<b>" . $adj . $skill . "</b>" .  $expl."</li>";
  }
  /*
  Being comfortable with algorithmic thinking means 
    * having good intuition for how to store and manipulate your data, 
    * being able to think both iteratively and recursively, and 
    * being able to reason about the performance characteristics of the code you write.
  */
  
  // function quality(){
  //   $adj = "Inexorably ";
  //   $skill= "quality-oriented worker: ";
  //   $expl = "Thorough, assiduous";
  //   print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  // }
  
  function teaching(){
    $adj = "Gifted ";
    $skill= "teacher and coach: ";
    $expl = "accomodating to learning every student's learning style, "
            . "patient and able to explain complex ideas in simple terms";
    $title = "hello!";
    print "<li title=". $title. ">" 
            . "<b>" . $adj . $skill . "</b>" 
            .  $expl . "</li>";
  }

  // http://careeradvancementblog.com/positive-relationships-team-members
  function team_playing(){
    $adj = "Reliable ";
    $skill= "team player: ";
    $expl = "genuinely committed, ethical, doing more than asked, "
            . "adapting quickly as demonstrated by being part of a team "
            . "in several previous positions";
    $title = "hello!";
    print "<li title=". $title. ">" 
            . "<b>" . $adj . $skill . "</b>" 
            .  $expl . "</li>";
  }

  function translating(){
    $adj = "Accurate ";
    $skill= "translator: ";
    $expl = "made quality language translations of numerous "
            . "written and video works";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function unit_testing(){
    $x = "Designed and performed unit testing "
            . "on a major Mozilla project according to standards";
    print "<li>" . $x . "</li>";
  }

  // for Palomino 141005
  function web_design(){
    $x = "Strong knowledge using jQuery and HTML5 to create interactive "
            . "web pages for personal and college projects";
    print "<li>" . $x . "</li>";
  }
    
  software_development();
  programming();
  analysis();
  managing();
  //communication();
  /*
  front_end_development();
  server_side_scripting();
  cs_development();
  data_bases();
  project_lead();
  */

  /*
  // Randstad (141017)
  programming();
  software_development();
  cs_development();
  data_bases();
  unit_testing();
  communication();
  documentation();
  */
  /*
  // IKEA - Kitchen Planning Sales
  customer_service();
  manager();
  programmer();
  analyst();
  communicator();
  teacher();
  learner();
  // listener();
  // multicultural(); 
  // no frills
  // team_player();

  
  // hard_worker();
  // 
  // organizer();
  // 
  // strategist();
  
  // problem_solver();
  
  // 
  // 
  // editor();
  
  // translator();
  */
  /*---------------------------------------------
  // CANTIRE IT Infrastructure Leadership Program
  manager();
  programmer();
  // organizer();
  analyst();
  // strategist();
  communicator();    
  // problem_solver();
  team_player();
  // listener();
  // multicultural();
  // editor();
  learner();
  // translator();
  -----------------------------*/
  /*
  // SyncBASE
  software_development();
  //programmer2();
  // manager();
  // organizer();
  analysis();
  cs_development();
  mysql_savvy();
  communication();

  // strategist();
     
  // problem_solver();
  // team_player(); //
  // listener();
  // multicultural();
  // editor();
  // learner();
   
  // translator();
  */
  
  // PALOMINO - 141003
  // seneca_student();
  // software_developer();
  // web_designer();
  // analyst2();
  // communicator2();
  // programmer();
  // manager();
  // organizer();
  // analyst();
  // strategist();
  // communicator();    
  // problem_solver();
  // team_player();
  // listener();
  // multicultural();
  // editor();
  // learner();
  // translator();
  
  /*------------------
  // 141003fr IBM
  programmer();
  manager();
  //organizer();
  analyst();
  strategist();
  communicator();    
  //problem_solver();
  team_player();
  //listener();
  multicultural();
  //editor();
  //learner();
  //translator();
  -------------------*/
  /*--------------------
  programmer();
  manager();
  organizer();
  analyst();
  strategist();
  communicator();    
  problem_solver();
  team_player();
  listener();
  multicultural();
  editor();
  learner();
  translator();
  ----------------------*/
    ?>
  </ul>
</div>