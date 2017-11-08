<?php

/**
 * @file
 * Stanford Image Styles Drush Commands.
 */

/**
 * Implements hook_drush_command().
 */
function stanford_magazine_drush_command() {
  $items = array();
  $items['stanford-magazine-image-update'] = array(
    'aliases' => array('sm-image-update'),
  );
  return $items;
}

/**
 * Print out behat test for all image styles in this module.
 */
function drush_stanford_magazine_image_update() {
  module_load_include('module', 'stanford_magazine', 'stanford_magazine.module');

  stanford_magazine_article_set_image();
  drush_print("Stanford Magazine: Updated default image");
}
