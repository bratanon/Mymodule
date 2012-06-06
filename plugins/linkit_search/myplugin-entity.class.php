<?php
/**
 * @file
 * Define Linkit node plugin class.
 */
class LinkitPluginMymoduleEntity extends LinkitSearchPluginEntity {

  /**
   * Return a string representing this handler's name in the UI.
   */
  function ui_title() {
    return '--' . check_plain($this->plugin['ui_title']) . ' --';
  }

  /**
   * Generate a settings form for this handler.
   * Uses the standard Drupal FAPI.
   * The element will be attached to the "data" key.
   *
   * @return
   *   An array containing any custom form elements to be displayed in the
   *   profile editing form.
   */
  function buildSettingsForm() {
    // Get the parent settings form.
    $form = parent::buildSettingsForm();

    $form[$this->plugin['name']]['foo'] = array(
      '#title' => t('A settings for mymodule_entity'),
      '#type' => 'checkbox',
      '#default_value' => isset($this->conf['foo']) ? $this->conf['foo'] : 0,
    );

    return $form;
  }
}