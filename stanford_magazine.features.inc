<?php
/**
 * @file
 * stanford_magazine.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_magazine_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function stanford_magazine_node_info() {
  $items = array(
    'stanford_magazine_article' => array(
      'name' => t('Magazine article'),
      'base' => 'node_content',
      'description' => t('A magazine article can be included in a magazine issue. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
