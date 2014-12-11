<?php
  function print_array($array){
    return implode(", ", $array);  
  }

  $ar_data = array(
    "JASON",
    "Markdown",
    "Regular Expressions"
  );
    
  $ar_db = array(
    "Oracle RDBMS", 
    "Oracle's SQL*Plus", 
    "MySQL",
    "Data Warehousing and Administration",    
    "SQLite"
  );

  $ar_environments = array(
    "Node.js",
    "Rational Rose XDE"
  );

  $ar_frameworks = array(
    "ASP.NET MVC4",
    "Mocha"  
  );

  $ar_langs = array(
    "C",
    "C#",
    "C++",
    "COBOL",
    "CSS",
    "DB2", 
    "HTML5",
    "Java",
    "JavaScript",
    "RPG",
    "XML",
    "WSDL"
  );

  $ar_libraries = array(
    "jQuery",
    "Processing.js"
  );

  $ar_OS = array(
    "Android",
    "Fedora",
    "IBM AS/400",
    "Linux",
    "MS Windows 8/7/XP", 
    "OS X", 
    "UNIX/Linux", 
  );

  $ar_platforms = array(
    "Transifex"
  );

  $ar_soft = array(
    "Apache HTTP server", 
    "Apache Tomcat", 
    "GlassFish", 
    "Microsoft Windows Server 2008",
    "MS Windows Server 2008"
  );

  $ar_techniques = array(
    "Ajax",
    "unit testing"
  ); 

  $ar_tools = array(
    "jshint",
    "Git",
    "GruntJS", 
  );

  $ar_text_editors_ide = array(
    "Eclipse",
    "Komodo Edit",
    "Libre Office",
    "MS Access",
    "MS Excel",
    "MS Office",
    "MS Word",
    "MySQL Workbench",
    "NetBeans",
    "Notepad++",
    "Rational Rose modeling tool (with UML)",
    "Sublime Text",
    "Visual Studio"
  );

  $ar_networking = array(
    "SOAP",
    "HTTP",
    "FTP"
  );
?>
<!-- <div class="bar">TECHNICAL SKILLS</div>
      <div id="table">

          <div>
            <div>Operating Systems</div>
            <td><?php print print_array($ar_OS); ?></div>
          </div>

          <div>
            <div>Programming</div>
            <td><?php print print_array($ar_prog); ?></div>
          </div>

          <div>
            <div>Database</div>
            <td><?php print print_array($ar_db); ?></div>
          </div>

          <div>
            <div>Tools</div>
            <td><?php print print_array($ar_tools); ?></div>
          </div>
          
      </div> -->

  <div class="bar">TECHNICAL SKILLS</div>
      <table>

          <tr>
            <td class="tr_title">Operating Systems</td>
            <td class="tr_value"><?php print print_array($ar_OS); ?></td>
          </tr>

          <tr>
            <td class="tr_title">Languages</td>
            <td class="tr_value"><?php print print_array($ar_langs); ?></td>
          </tr>

          <tr>
            <td class="tr_title">Libraries</td>
            <td class="tr_value"><?php print print_array($ar_libraries); ?></td>
          </tr>

          <tr>
            <td class="tr_title">Databases</td>
            <td class="tr_value"><?php print print_array($ar_db); ?></td>
          </tr>

          <tr>
            <td class="tr_title">Environments</td>
            <td class="tr_value"><?php print print_array($ar_environments); ?></td>
          </tr>


          <tr>
            <td class="tr_title">Software</td>
            <td class="tr_value"><?php print print_array($ar_soft); ?></td>
          </tr>

          <tr>
            <td class="tr_title">Tools</td>
            <td class="tr_value"><?php print print_array($ar_tools); ?></td>
          </tr>

          <tr>
            <td class="tr_title">Data formats</td>
            <td class="tr_value"><?php print print_array($ar_data); ?></td>
          </tr>

          <tr>
            <td class="tr_title">Techniques</td>
            <td class="tr_value"><?php print print_array($ar_techniques); ?></td>
          </tr>

          <tr>
            <td class="tr_title">Frameworks</td>
            <td class="tr_value"><?php print print_array($ar_frameworks); ?></td>
          </tr>

          <tr>
            <td class="tr_title">Environments</td>
            <td class="tr_value"><?php print print_array($ar_text_editors_ide); ?></td>
          </tr>

          <tr>
            <td class="tr_title">Networking</td>
            <td class="tr_value"><?php print print_array($ar_networking); ?></td>
          </tr>

          <tr>
            <td class="tr_title">Platforms</td>
            <td class="tr_value"><?php print print_array($ar_platforms); ?></td>
          </tr>

          <tr>
            <td class="tr_title">Editors</td>
            <td class="tr_value"><?php print print_array($ar_text_editors_ide); ?></td>
          </tr>
          
      </table>