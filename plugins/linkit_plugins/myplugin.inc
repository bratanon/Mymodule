<?php
/**
 * @file
 * Linkit mymodule Plugin.
 */

$plugin = array(
  'ui_title' => t("Mymodule"),
  'ui_description' => t('Enables mymodule results'),
  'handler' => array(
      'class' => 'MymoduleLinkitPlugin',
      'file' => 'myplugin.class.php',
  ),
);
