<?php
/**
 * @file
 * Define a custom Linkit attribute plugin.
 *
 * The filename is important. It will be used as the HTML tag name. In this ex.
 * the HTML tag will be 'linkit_my_custom_attr'.
 *
 * See Drupal.linkit.additionalAttributes in linkit.dashboard.js for parse ex.
 */

$plugin = array(
  'name' => t('My custom attribute'),
  'callback' => 'my_module_linkit_attribute_plugin_custom_attr',
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
 *
 * NOTE: You can use the '#name' key in the FAPI element, but you have to add
 * the 'linkit_' prefix.
 */
function my_module_linkit_attribute_plugin_custom_attr($plugin, $settings = array()) {
  return array(
    '#type' => 'textfield',
    '#options' => array(),
    '#title' => $plugin['name'],
    //'#name' => 'linkit_custom_name',
    '#maxlength' => 255,
    '#size' => 40,
    '#default_value' => '',
    '#weight' => isset($settings['weight']) ? $settings['weight'] : 0,
  );
}