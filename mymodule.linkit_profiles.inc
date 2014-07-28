<?php
/**
 * @file
 * Export of linkit_profiles objects.
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function mymodule_default_linkit_profiles() {
  $linkit_profiles = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'default_profile';
  $linkit_profile->admin_title = 'default_profile';
  $linkit_profile->admin_description = 'default_profile desc';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'ckeditor' => 'ckeditor',
      'plain_text' => 0,
      'full_html' => 0,
      'filtered_html' => 0,
      'tinymce' => 0,
    ),
    'search_plugins' => array(
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_saved_searches_settings' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:comment' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:comment' => array(
      'result_description' => '',
      'bundles' => array(
        'comment_node_article' => 0,
        'comment_node_page' => 0,
        'comment_node_test' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:node' => array(
      'result_description' => 'by [node:author] | [node:created]',
      'bundles' => array(
        'article' => 0,
        'page' => 0,
        'test' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
      'include_unpublished' => 0,
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
      'include_unpublished' => 0,
    ),
    'entity:search_api_saved_searches_settings' => array(
      'result_description' => '',
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'audio' => 0,
        'document' => 0,
        'image' => 0,
        'video' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'url_method' => '3',
    ),
    'attribute_plugins' => array(
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'customattr' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $linkit_profiles['default_profile'] = $linkit_profile;

  return $linkit_profiles;
}
