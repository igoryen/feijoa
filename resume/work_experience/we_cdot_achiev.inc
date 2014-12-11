<?php 

function l10n(){
  $action = "Localized codebase: ";
  $expl = "developed and implemented a localization solution for "
          . "2 Mozilla's web-based tools - Webmaker.org and TogetherJS - "
          . "which helped expand Mozilla's scope of services internationally "
          . "by localizing the tools into more than 60 languages";
  print "<li>" . $action . $expl . "</li>";
}

function t9n(){
  $action = "Provided ";
  $expl = "unit testing code for the website's API using a testing framework";
  print "<li>" . $action . $expl . "</li>";
} 

?>

<ul>
  <?php
    l10n();
    t9n();
  ?>
</ul>
