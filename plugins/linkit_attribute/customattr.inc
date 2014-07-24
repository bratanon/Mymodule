<?php
/**
 * @file
 * Define Linkit custom attribute plugin.
 */

$plugin = array(
  'name' => t('Custom attr'),
  'callback' => 'mymodule_linkit_attribute_plugin_customattr',
);

/**
 * Create a FAPI element.
 *
 * @param array $plugin
 *   This is the plugin definition.
 *
 * @param array $settings
 *   An array of settings for this attribute. This is from the profile settings.
 *
 * @return
 *   An FAPI element.
 *
 * @see LinkitProfile::setAttributes()
 */
function mymodule_linkit_attribute_plugin_customattr($plugin, $settings = array()) {
  return array(
    '#type' => 'textfield',
    '#title' => $plugin['name'],
    '#maxlength' => 255,
    '#size' => 40,
    '#default_value' => '',
    '#weight' => isset($settings['weight']) ? $settings['weight'] : 0,
  );
}
