<?php
/**
 * @file
 * stanford_magazine_series.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_magazine_series_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function stanford_magazine_series_node_info() {
  $items = array(
    'stanford_magazine_series' => array(
      'name' => t('Stanford Magazine Series'),
      'base' => 'node_content',
      'description' => t('This displays a series of magazine articles'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
