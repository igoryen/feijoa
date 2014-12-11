<div id="my_address">
<?php
  function long_address(){
    // $a = array();
    // array_push($a, )
    $apt = "102 - ";
    $street = "2980, Don Mills Rd.,";
    $city = "North York, ON";
    $phone = "647-703-6200";
    $email = "igor.entaltsev@gmail.com";
    $in_image = "<img src=\"../images/linkedin.jpg\" height=\"17\">";
    $in_link = "<a href=\"http://ca.linkedin.com/in/igoryen/\" target=\"_blank\">"
            .$in_image."</a> ca.linkedin.com/in/igoryen/";
    print $apt . $street . $city . " &bull; " . $phone . " &bull; " 
            . $email . " &bull; " . $in_link;
  }

  function short_address(){
    $city = "North York, ON";
    $phone = "647-703-6200";
    $email = "igor.entaltsev@gmail.com";
    $in_image = "<img src=\"../images/linkedin.jpg\" height=\"17\">";
    $in_link = "<a href=\"http://ca.linkedin.com/in/igoryen/\" target=\"_blank\">"
            .$in_image."</a> ca.linkedin.com/in/igoryen/";
    print $city . " &bull; " . $phone . " &bull; " . $email . " &bull; " 
            . $in_link;
  }
  
  short_address();

?>

</div>
