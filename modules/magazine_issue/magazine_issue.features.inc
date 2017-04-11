<?php
/**
 * @file
 * magazine_issue.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function magazine_issue_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function magazine_issue_node_info() {
  $items = array(
    'stanford_magazine_issue' => array(
      'name' => t('Magazine Issue'),
      'base' => 'node_content',
      'description' => t('A magazine issue contains 5 magazine articles'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
