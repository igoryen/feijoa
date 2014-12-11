<ul>
  <?php

    function ak_concise(){
      $a = "<li>";
      $b = "</li>";
      $supervised = "Supervised large staff; arranged foreign visitors "
              . "visa registration; created a user manual for the public "
              . "address and alarm system.";
      print $a . $supervised . $b;
    }
    
    function ak_detailed(){
      $a = "<li>";
      $b = "</li>";
      $supervised = "Supervised the work of a staff of 40 people and arranged "
              . "foreign visitors visa registration";
      //$manual = "Created a user manual for the public address and alarm system";
      $impressions = "Managed the first impressions of the company "
              . "and of its brand as well as reconciled customer complaints";

      print $a .$supervised. /*$b.$a .$manual.*/ $b.$a .$impressions. $b;
    }

    ak_detailed();
  ?>
</ul>