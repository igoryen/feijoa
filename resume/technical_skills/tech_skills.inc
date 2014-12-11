<?php
  function print_array($array){
    return implode(", ", $array);  
  }

  function database_mng(){
    $rubric = "Database Management";
    $x = "";
    $ary = array(
      "Oracle (SQL*Plus)", 
      "MySQL",
      "Microsoft SQL Server",
      "SQLite",
      "MS Access",
      "Data Warehousing and Administration"
    );
    $x .= '<tr>';
    $x .= '<td class="tr_title">'. $rubric .'</td>';
    $x .= '<td class="tr_value">'. implode(", ", $ary) . '</td>';
    $x .= '</tr>';
    print $x;
  }
    
  function data_formats(){
    $rubric = "Data Formats";
    $x = "";
    $arr = array(
      "JASON",
      "Markdown"
    );
    $x .= '<tr>';
    $x .= '<td class="tr_title">'. $rubric .'</td>';
    $x .= '<td class="tr_value">'. implode(", ", $arr) . '</td>';
    $x .= '</tr>';
    print $x;
  }

  function dev_envir(){
    $rubric = "Development environments";
    $x = "";
    $arr = array(
      "Eclipse", 
      "Visual Studio", 
      "NetBeans", 
      "MySQL Workbench", 
      "Processing", 
      "Rational Rose XDE", 
      "Rational Rose modeling tool (with UML)"
    );
    $x .= '<tr>';
    $x .= '<td class="tr_title">'. $rubric .'</td>';
    $x .= '<td class="tr_value">'. implode(", ", $arr) . '</td>';
    $x .= '</tr>';
    print $x;
  }
  
  function editors(){
    $rubric = "Editors";
    $x = "";
    $arr = array(
      "Sublime Text", 
      "Komodo Edit", 
      "Notepad++"
    );
    $x .= '<tr>';
    $x .= '<td class="tr_title">'. $rubric .'</td>';
    $x .= '<td class="tr_value">'. implode(", ", $arr) . '</td>';
    $x .= '</tr>';
    print $x;
  }
  
  function frameworks(){
    $rubric = "Frameworks";
    $x = "";
    $arr = array(
      "ASP.NET MVC4", 
      "Mocha"
    );
    $x .= '<tr>';
    $x .= '<td class="tr_title">'. $rubric .'</td>';
    $x .= '<td class="tr_value">'. implode(", ", $arr) . '</td>';
    $x .= '</tr>';
    print $x;
  }
  
  function langs_libs(){
    $rubric = "Languages and libraries";
    $x = "";
    $arr = array(
      "C", 
      "C#", 
      "C++", 
      "COBOL", 
      "CSS", 
      "DB2", 
      "HTML5", 
      "Java", 
      "JavaScript", 
      "jQuery", 
      "PHP", 
      "Processing", 
      "Processing.js", 
      "RPG", 
      "SQL", 
      "XML", 
      "WSDL"
    );
    $x .= '<tr>';
    $x .= '<td class="tr_title">'. $rubric .'</td>';
    $x .= '<td class="tr_value">'. implode(", ", $arr) . '</td>';
    $x .= '</tr>';
    print $x;
  }
  
  function networking(){
    $rubric = "Networking";
    $x = "";
    $arr = array(
      "SOAP", 
      "HTTP", 
      "FTP", 
      "SFTP"
    );
    $x .= '<tr>';
    $x .= '<td class="tr_title">'. $rubric .'</td>';
    $x .= '<td class="tr_value">'. implode(", ", $arr) . '</td>';
    $x .= '</tr>';
    print $x;
  }
  
  function office_suites(){
    $rubric = "Office suites";
    $x = "";
    $arr = array(
      "MS Office", 
      "MS Excel", 
      "MS Word", 
      "Libre Office"
    );
    $x .= '<tr>';
    $x .= '<td class="tr_title">'. $rubric .'</td>';
    $x .= '<td class="tr_value">'. implode(", ", $arr) . '</td>';
    $x .= '</tr>';
    print $x;
  }
  
  function OS(){ // operating systems
    $rubric = "OS";
    $x = "";
    $arr = array(
      "Android", 
      "IBM AS/400", 
      "MS Windows 8/7/XP", 
      "OS X", 
      "UNIX/Linux"
    );
    $x .= '<tr>';
    $x .= '<td class="tr_title">'. $rubric .'</td>';
    $x .= '<td class="tr_value">'. implode(", ", $arr) . '</td>';
    $x .= '</tr>';
    print $x;
  }
  
  function VCS(){ // version control systems
    $rubric = "VCS";
    $x = "";
    $arr = array(
      "Git"
    );
    $x .= '<tr>';
    $x .= '<td class="tr_title">'. $rubric .'</td>';
    $x .= '<td class="tr_value">'. implode(", ", $arr) . '</td>';
    $x .= '</tr>';
    print $x;
  }
  
  function RE(){ // runtime environments
    $rubric = "RE";
    $x = "";
    $arr = array(
      "Node.js", 
      "JRE"
    );
    $x .= '<tr>';
    $x .= '<td class="tr_title">'. $rubric .'</td>';
    $x .= '<td class="tr_value">'. implode(", ", $arr) . '</td>';
    $x .= '</tr>';
    print $x;
  }
  
  function servers(){ 
    $rubric = "Servers";
    $x = "";
    $arr = array(
      "Apache HTTP server", 
      "Apache Tomcat", 
      "GlassFish", 
      "MS Server 2008"
    );
    $x .= '<tr>';
    $x .= '<td class="tr_title">'. $rubric .'</td>';
    $x .= '<td class="tr_value">'. implode(", ", $arr) . '</td>';
    $x .= '</tr>';
    print $x;
  }
  
  function techniques(){ 
    $rubric = "Techniques";
    $x = "";
    $arr = array(
      "Ajax", 
      "Regular Expressions", 
      "unit testing"
    );
    $x .= '<tr>';
    $x .= '<td class="tr_title">'. $rubric .'</td>';
    $x .= '<td class="tr_value">'. implode(", ", $arr) . '</td>';
    $x .= '</tr>';
    print $x;
  }
  
  function tools(){ 
    $rubric = "Tools";
    $x = "";
    $arr = array(
      "JSHint", 
      "GruntJS"
    );
    $x .= '<tr>';
    $x .= '<td class="tr_title">'. $rubric .'</td>';
    $x .= '<td class="tr_value">'. implode(", ", $arr) . '</td>';
    $x .= '</tr>';
    print $x;
  }
?>
  <div class="bar">TECHNICAL SKILLS</div>
      <table>
<?php 
        database_mng();
        data_formats();
        dev_envir();
        frameworks();
        langs_libs();
        networking();
        office_suites();
        OS();
        VCS();
        RE();
        servers();
        techniques();
        tools();
?>          
      </table>