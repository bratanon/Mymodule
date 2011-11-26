<?php

class MymoduleLinkitPlugin  extends LinkitPlugin {

  /**
   * Let say we would like to do more things then the default buildLabel in
   * LinkitPlugin does, then we can override the default method with our own.
   */
  function buildLabel($item) {
    // Lets add a string at the start of all labels.
    $label = 'Mystringhere - ' . $item->title;
    return check_plain($label);
  }

   /**
   * The autocomplete callback function for the mymodule plugin.
   *
   * @return
   *   An associative array whose values are an
   *   associative array containing:
   *   - title: A string to use as the search result label.
   *   - description: (optional) A string with additional information about the
   *     result item.
   *   - path: The URL to the item.
   *   - group: (optional) A string with the group name for the result item.
   *     Best practice is to use the plugin name as group name.
   *   - addClass: (optional) A string with classes to add to the result row.
   */
  function autocomplete_callback() {
    $matches = array();

    $result = array();
    for ($i = 0; $i < 10; $i++) {
      $result[$i] = new stdClass;
      $result[$i]->title = 'Item ' . $i;
      $result[$i]->path = 'test-path/' . $i;
      $result[$i]->description = 'Test description ' . $i;
    }

    $matches = array();

    foreach ($result AS $item) {
      $matches[] = array(
        'title' => $this->buildLabel($item),
        'description' => $this->buildDescription($item),
        'path' => $this->buildPath($item->path),
        'group' => $this->buildGroup('Mymodule'),
        'addClass' => $this->buildRowClass('some_css_class'),
      );
    }
    return $matches;
  }
}