<?php
/*
  function bla(){
    $x = "bla";
    print $x;
  }

*/
//==========================================================================
// ADDRESS
//==========================================================================
  function long_address(){
    // $a = array();
    // array_push($a, )
    $apt = "102 - ";
    $street = "2980, Don Mills Rd.,";
    $city = "North York, ON";
    $phone = "647-703-6200";
    $email = "igor.entaltsev@gmail.com";
    $in_image = "<img src=\"../images/linkedin.jpg\" height=\"17\">";
    $in_link = "<a href=\"http://ca.linkedin.com/in/igoryen/\" target=\"_blank\">".$in_image."</a> ca.linkedin.com/in/igoryen/";
    print $apt . $street . $city . " &bull; " . $phone . " &bull; " . $email . " &bull; " . $in_link;
  }

  function short_address(){
    $city = "North York, ON";
    $phone = "647-703-6200";
    $email = "igor.entaltsev@gmail.com";
    $in_image = "<img src=\"../images/linkedin.jpg\" height=\"17\">";
    $in_link = "<a href=\"http://ca.linkedin.com/in/igoryen/\" target=\"_blank\">".$in_image."</a> ca.linkedin.com/in/igoryen/";
    print $city . " &bull; " . $phone . " &bull; " . $email . " &bull; " . $in_link;
  }

//==========================================================================
// OBJECTIVE STATEMENT
//==========================================================================
  function objective(){
    $x = "GOAL: Kitchen Planning Sales";
     // $x = "GOAL: Richard's No Frills Store Team Member";
    // $x = "GOAL: Participation in the IT Infrastructure Leadership Program";
    // $x = "OBJECTIVE: Software Developer";
    // $x = "Objective: to obtain a retail position";
    // $x = "CAREER GOAL: WEB DEVELOPER";
    // $x = "OBJECTIVE: CANADIAN TIRE STORE TEAM MEMBER";
    // $x = "OBJECTIVE: Entry-Level Business Consultant/ IT Specialist"; // IBM - Nova Scotia
    // $x = "OBJECTIVE: Web Developer/Software Engineer";
    print $x;
  }

//==========================================================================
// HIGHLIGHTED SKILLS
//==========================================================================
  /*
  http://www.businessbee.com/resources/sales/5-traits-good-data-analyst/
  */


  // • 
  // • 
  // • ..
  // • Fascinated with complex systems analysis as demonstrated by the knowledge of the grammars of more than a dozen languages
  // • Clear and concise speaker; attentive listener as demonstrated by having effectively managed numerous teams


  function analyst(){
    $adj = "Detail-oriented ";
    $skill= "analyst: ";
    $expl = "curious, research-loving, fascinated with complex systems analysis as demonstrated by the knowledge of the grammars of more than a dozen languages";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function analyst2(){
    $x = "Fascinated with complex systems analysis as demonstrated by the knowledge of the grammars of more than a dozen languages";
    print "<li>" . $x . "</li>";
  }

  function communicator(){
    $adj = "Clear ";
    $skill= "communicator: ";
    $expl = "clear and concise speaker, always representing facts, attentive listener as demonstrated by having effectively managed numerous teams";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function communicator2(){
    $x = "Clear and concise speaker, attentive listener as demonstrated by having effectively managed numerous teams";
    print "<li>" . $x. "</li>";
  }
  
  // IKEA kitchen planning sales - 141005
  function customer_service(){
    $adj = "Thoughtful ";
    $skill= "in customer service: ";
    $expl = "experienced in hospitality industry, oriented at the highest customer satisfaction, proactive and courteous toward customers";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function editor(){
    $adj = "Good ";
    $skill= "editor: ";
    $expl = "good writer and researcher, critical thinker: compiled and authored teaching materials for a wide range of readers";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  // !!! a quality, not a skill
  function hard_worker(){
    $adj = "Energetic ";
    $skill= "worker: ";
    $expl = "tenacious, self-motivated, success-oriented, ethical and conscientious as demonstrated by putting in 120% in all previous positions";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function learner(){
    $adj = "Devoted ";
    $skill= "continuous learner: ";
    $expl = "tenacious, self-motivated, success-oriented, committed to constantly expanding the personal arsenal of skills through self-teaching and self-education";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function listener(){
    $adj = "Attentive ";
    $skill= "listener: ";
    $expl = "concentrating on another person's message, tactful, empathetic and objective as demonstrated by being successful in work with people in previous positions";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";

  }

  function manager(){
    $adj = "Experienced ";
    $skill= "manager and organizer: ";
    $expl = "open and transparent, " .
            "leading by example, " .
            "able to multitask and prioritize, ".
            //"creative, ".
            //"flexible, ".
            //"and altruistic, ".
            "as demonstrated by supervising a staff of 40 people as well as having effectively organized, overseen, trained and coordinated 6 teams of 5 individuals each";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function multicultural(){
    $adj = "Multicultural ";
    $skill= "experience: ";
    $expl = "understanding and respecting people of other cultures as demonstrated by having lived and worked for 2 years abroad, and being an effective project team leader of a culturally diverse group of students at college";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function organizer(){
    $adj = "Excellent ";
    $skill= "organizer: ";
    $expl = "creative, tenacious, flexible, and altruistic as demonstrated by having effectively organized, overseen, trained and coordinated six teams of 5 individuals each";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function problem_solver(){
    $adj = "Excellent ";
    $skill= "problem solver: ";
    $expl = "xxxx";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  /*
  https://www.hackerschool.com/blog/27-fundamental-qualities-of-good-programmers
  http://www.cssp.com/CD0808b/CriticalStrategicThinkingSkills/
  */
  function programmer(){
    $adj = "Enthusiastic ";
    $skill= "programmer: ";
    $expl = "energetic, " .
            "result-oriented, " .
            "experienced in object oriented development and design, " .
            //"comfortable with algorithmic thinking, " .
            //"able to structure code well, " .
            "passionate about web development and data processing";
    $title = "Being comfortable with algorithmic thinking means 
    * having good intuition for how to store and manipulate your data, 
    * being able to think both iteratively and recursively, and 
    * being able to reason about the performance characteristics of the code you write.";
    
    print "<li title=\" $title\">" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  // used for Palomino 141005
  function seneca_student(){
    $x = "Currently enrolled in the Computer Programming and Analysis Co-op Diploma; expected completion December 2014";
    print "<li>" . $x . "</li>";
  }
  // used for Palomino 141005
  function software_developer(){
    $x = "Designed and implemented a database-driven web application that uses Apache, MySQL and PHP to store and search for winged phrases in multiple languages";
    print "<li>" . $x . "</li>";
  }
  // for SyncBASE 141005
  function software_developer2(){
    $adj = "Advancing ";
    $skill = "software developer: ";
    $expl = "enjoy being active in all phases of the systems development life cycle as demonstrated in the development of the college group project";
    print "<li>"."<b>" . $adj . $skill . "</b>" .  $expl."</li>";
  }

  //http://www.inc.com/paul-schoemaker/6-habits-of-strategic-thinkers.html
  function strategist(){
    $adj = "Advancing ";
    $skill = "strategic thinker: ";
    $expl = "able to see the big picture, conceptualize complexity, think critically, synthesize information from many sources before making a decision as practiced in major life decisions";
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
  
  function teacher(){
    $adj = "Gifted ";
    $skill= "teacher and coach: ";
    $expl = "accomodating to learning every student's learning style, patient and able to explain complex ideas in simple terms";
    $title = "hello!";
    print "<li title=". $title. ">" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  // http://careeradvancementblog.com/positive-relationships-team-members
  function team_player(){
    $adj = "Reliable ";
    $skill= "team player: ";
    $expl = "genuinely committed, ethical, doing more than asked, adapting quickly as demonstrated by being part of a team in several previous positions";
    $title = "hello!";
    print "<li title=". $title. ">" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  function translator(){
    $adj = "Accurate ";
    $skill= "translator: ";
    $expl = "made quality language translations of numerous written and video works";
    print "<li>" . "<b>" . $adj . $skill . "</b>" .  $expl . "</li>";
  }

  // for Palomino 141005
  function web_designer(){
    $x = "Strong knowledge using jQuery and HTML5 to create interactive web pages for personal and college projects";
    print "<li>" . $x . "</li>";
  }
  
  //=== CUSTOMIZED AGGREGATES =======================================

  function dollarama(){
    hard_worker();
    team_player();
    multicultural();
    communicator();
    listener();
  }
  function it(){
    programmer();
    analyst();
    learner();
    team_player();
    communicator();
    manager();
  }
  function cantire(){
    team_player();
    manager();                
    communicator();
    multicultural();
    listener();
    //hard_worker();
  }
  function ibm_it_hl(){
    manager();
    programmer();
    analyst();
    strategist();
    communicator();
  }
  function all_skills(){
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
  }
  // 141003fr
  function IBM_skills(){
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
  }

//==========================================================================
// TECHNICAL SKILLS
//==========================================================================

  function print_array($array){
    return implode(", ", $array);  
  }

  $ar_OS = array(
    "Windows 8/7/XP", 
    "OS X", 
    "Android",
    "UNIX/Linux", 
    "IBM AS/400"
    );

  $ar_prog = array(
    "JavaScript", 
    "HTML5", 
    "CSS", 
    "JQuery", 
    "Ajax", 
    "Java", 
    "C#", 
    "Node.js", 
    "ASP.NET MVC4", 
    "PHP", 
    "C", 
    "C++", 
    "COBOL", 
    "unit testing", 
    "website hosting"
    );

  $ar_db = array(
    "Oracle Database",
    "Oracle's SQL*Plus", 
    //"SQL", 
    "MySQL",    
    "Data Warehousing and Administration", 
    "RPG", 
    "DB2", 
    );

  $ar_tools = array(
    "Git", 
    "Eclipse", 
    // "NetBeans", 
    // "Microsoft Visual Studio",
    "MS Visual Studio", 
    // "Microsoft Windows Server 2008",
    "MS Windows Server 2008", 
    "Apache HTTP server", 
    // "Apache Tomcat", 
    // "GlassFish", 
    // "Transifex", 
    "Rational Rose modeling tool (with UML)", 
    "IBM Rational Developer for Power Systems Software (RDP)", 
    "Oracle RDBMS", 
    "MS Office", 
    "Libre Office"
    );

//==========================================================================
// EDUCATION
//==========================================================================
  // education: Arts school

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

  // education: CELTA

    function celta_cert_name(){
      $x = "Certificate in Teaching English to Adults (CELTA)";
      print $x;
    }
    function celta_joint_name(){
      $x = "Language Link, Beijing, China";
      print $x;
    }
    function celta_time(){
      $x = "Oct - Nov 2007";
      print $x;
    }

  // education: Herzen

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

  // education: Seneca

    function seneca_cert_name(){
      $x = "Computer Programming and Analysis Co-op Diploma";
      print $x;
    }
    function seneca_name(){
      $x = "Seneca College, Toronto, ON (expected to graduate: December 2014)";
      print $x;
    }
    function seneca_time(){
      //$x = "2011 - current";
      $x = "2011 - present";
      print $x;
    }

  // education: Seneca projects

    function phrase_watch(){
      $x = "Developed PhraseWatch - an online application using Apache, MySQL, PHP and jQuery/HTML5 for storing winged phrases in several languages";
      print "<li>" . $x . "</li>";
    }
    function asp_net(){
      $x = "Developed a database-driven web application using ASP.NET MVC4 in Visual Studio that keeps records of a college's faculty and students and notifies them of classes' cancellations";
      print "<li>" . $x . "</li>";
    }
    function android(){
      $x = "Developed a database-driven Android application for drivers to track gas purchases by gas station";
      print "<li>" . $x . "</li>";
    }
    function surplus(){
      $x = "Surplus: an online store website using Apache, MySQL and PHP";
      print "<li>" . $x . "</li>";
    }
    function mama_pizza(){
      $x = "MamaPizza: an online store order web page for an online store with JavaScript validation";
      print "<li>" . $x . "</li>";
    }
    function sencon(){
      $x = "SenCon: a Construction Projects Maintenance Program written in COBOL on IBM i-Series server with CRUD database functionality and the create-print summary reports feature.";
      print "<li>" . $x . "</li>";
    }

//==========================================================================
// WORK EXPERIENCE
//==========================================================================
  // work experience: C&T

    function cat_pos_name(){
      $x = "Translator";
      print $x;
    }
    function cat_name(){
      $x = "The C&T Publishing Company, Sochi, Russia";
      print $x;
    }
    function cat_time(){
      $x = "Sep 1995 - Dec 1996";
      print $x;
    }

  // work experience: C&T (achievements)

    function cat_translate(){
      $x = "Greatly improved the international correspondence and interpreted at multiple meetings";
      print "<li>" . $x . "</li>";
    }

  // work experience: School of Tomorrow

    function sot_pos_name(){
      $x = "Teacher";
      print $x;
    }
    function sot_name(){
      $x = "The International School Of Tomorrow, Sochi, Russia";
      print $x;
    }
    function sot_time(){
      $x = "Sep 1998 - Jul 2000";
      print $x;
    } 

  // work experience: School of Tomorrow (achievements)

    function sot_general(){
      $x = "Efficiently taught three elementary school courses; translated a multi-volume school curriculum.";
      print "<li>" . $x . "</li>";
    }
   
    function sot_detailed(){
      $a = "<li>";
      $b = "</li>";
      $routine = "Taught three elementary school courses; made one course more attractive to students; prepared weekly reports; provided translation services";  
      $transl = "Made a Russian translation of a multi-volume Sunday school curriculum";
      print $a . $routine . $b . $a . $transl . $b;
    }

  // work experience: AdlerKurort

    function ak_pos_name(){
      $x = "Hotel Manager Assistant";
      print $x;
    }
    function ak_name(){
      $x = "AdlerKurort, Sochi, Russia";
      print $x;
    }
    function ak_time(){
      $x = "May 2001 - Oct 2002";
      print $x;
    } 

  // work experience: AdlerKurort (achievements)

    function ak_concise(){
      $a = "<li>";
      $b = "</li>";
      $supervised = "Supervised large staff; arranged foreign visitors visa registration; created a user manual for the public address and alarm system.";
      print $a . $supervised . $b;
    }
    function ak_detailed(){
      $a = "<li>";
      $b = "</li>";
      $supervised = "Supervised the work of a staff of 40 people and arranged foreign visitors visa registration";
      //$manual = "Created a user manual for the public address and alarm system";
      $impressions = "Managed the first impressions of the company and of its brand as well as reconciled customer complaints";

      print $a .$supervised. /*$b.$a .$manual.*/ $b.$a .$impressions. $b;
    }

  // work experience: CCS

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

  // work experience: CCS (achievements)

    function ccs_concise(){
      $x = "Significantly expanded services and increased membership; organized, oversaw, trained and coordinated six teams of 5 individuals each; developed a new curriculum, translated a TV film.";
      print "<li>" . $x . "</li>";
    }

    function pioneer_ccs(){
      $x = "Pioneered two new departments which helped expand services and increase membership";
      print "<li>" . $x . "</li>";
    }
    function manager_ccs(){
      $x = "Organized, oversaw, trained and coordinated six teams of 5 individuals each";
      print "<li>" . $x . "</li>";
    }
    function author_ccs(){
      $x = "Developed a new curriculum and produced teaching CD's";
      print "<li>" . $x . "</li>";
    }

  // work experience: Blagoveshchensk
    function bl_pos_name(){
      $x = "";
      print $x;
    }
    function bl_name(){
      $x = "bla";
      print $x;
    }
    function bl_time(){
      $x = "bla";
      print $x;
    }
  
  // work experience: China

    function ch_pos_name(){
      $x = "Teacher of English as a Second Language";
      print $x;
    }
    function ch_name(){
      $x = "Heilongjiang EEC Institute, Caree Sunshine School, Harbin, China";
      print $x;
    }
    function ch_time(){
      $x = "Feb 2008 - Jul 2010";
      print $x;
    } 

  // work experience: China (achievements)


    function china_concise(){
      $x = "Increased academic progress by developing new methodology and improving the existing ones.";
      print "<li>" . $x . "</li>";
    }
    
    function curriculum_improver(){
      $x = "Improved and adapted old curriculum"; 
      print "<li>" . $x . "</li>"; 
    }
    function methodologist(){
      $x = "Developed a new original teaching methodology that significantly increased academic progress"; 
      print "<li>" . $x . "</li>";
    }
    function demystifier(){
      $x = "Demystified laws of learning language to beginners";
      print "<li>" . $x . "</li>";
    }
  
  // work experience: CDOT

    function cdot_pos_name(){
      $x = "Research Assistant - Web Developer";
      print $x;
    }
    function cdot_name(){
      $x = "Seneca's Centre for Development of Open Technology (Co-op position)";
      print $x;
    }
    function cdot_time(){
      $x = "May 2013 - Dec 2013";
      print $x;
    } 

  // work experience: CDOT (achievements)

    function l10n(){
      $action = "Localized codebase: ";
      $expl = "developed and implemented a localization solution for 2 Mozilla's web-based tools - Webmaker.org and TogetherJS - which helped expand Mozilla's scope of services internationally by localizing the tools into more than 60 languages";
      print "<li>" . $action . $expl . "</li>";
    }

    function t9n(){
      $action = "Provided ";
      $expl = "unit testing code for the website's API using a testing framework";
      print "<li>" . $action . $expl . "</li>";
    }
 

//==========================================================================
// ACHIEVEMENTS
//==========================================================================

  function bilingual(){
    $x = "Raised my children bilingual (English and Russian)";
    print "<li>" . $x . "</li>";
  }
  function curriculum(){
    $x = "Developed my own Teach-Yourself-English curriculum";
    print "<li>" . $x . "</li>";
  }

//==========================================================================
// HOBBIES AND INTERESTS
//==========================================================================

  function linguist(){ 
    $x = "Linguistics and languages (Chinese, Latin, Hebrew)";
    print "<li>" . $x . "</li>";
  }

  function musician(){
    $x = "Music (drums, guitar)";
    print "<li>" . $x . "</li>";
  }

  function web_wizard(){
    $x = "Aspire to become a wizard in web application development";
    print "<li>" . $x . "</li>";
  }
  function almond(){
    $x = "Almond: system to store web links - developing since 2013 using JavaScript and Node.js";
    print "<li>" . $x . "</li>";
  }
  function language_software(){
    $x = "Developing scripts for an application to help learn language vocabulary";
    print "<li>" . $x . "</li>";
  }
  
  function autotransl(){
    $x = "Interested in automated translation";
    print "<li>" . $x . "</li>";
  }


//==========================================================================
// VOLUNTEER
//==========================================================================

  function lwc(){
    $x = "Youth services manager: effectively and knowledgeably supervised a staff of 8 teachers at a church Youth Department. On departure, was repeatedly asked to return because of good performance";
    print "<li>" . $x . "</li>";
  }
  function scenic_designer(){
    $x = "Scenic designer: designed and manufactured theatrical scenery for a community theater production";
    print "<li>" . $x . "</li>";
  }
  function humaid(){
    $x = "Humanitarian aid distribution: assisted in the community during the economic crisis in the country in late 1990";
    print "<li>" . $x . "</li>";
  }