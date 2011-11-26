<?php
/**
 * @file
 * Linkit mymodule Plugin.
 */

$plugin = array(
  'title' => t("Mymodule"),
  'description' => t('Enables mymodule results'),
  'handler' => array(
      'class' => 'MymoduleLinkitPlugin',
      'file' => 'myplugin.class.php',
  ),
);
