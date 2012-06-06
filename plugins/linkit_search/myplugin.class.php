<?php
/**
 * @file
 *
 */

class MymoduleLinkitSearchPlugin  extends LinkitSearchPlugin {

  /**
   * Let say we would like to do more things then the default buildLabel in
   * LinkitPlugin does, then we can override the default method with our own.
   */
  public function createLabel($item) {
    // Lets add a string at the start of all labels.
    $label = 'Mystringhere - ' . $item->title;
    return check_plain($label);
  }

  /**
   * Implements LinkitSearchPluginInterface::fetchResults().
   */
  public function fetchResults($serach_string) {
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
        'title' => $this->createLabel($item),
        'description' => $this->createDescription($item),
        'path' => $this->createPath($item->path),
        'group' => $this->createGroup('Mymodule'),
        'addClass' => $this->createRowClass('some_css_class'),
      );
    }
    return $matches;
  }
}