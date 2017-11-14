<?php
/**
 * @file
 * stanford_magazine_series.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_magazine_series_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_magazine_series';
  $context->description = 'Blocks that show up on Magazine Series nodes.';
  $context->tag = 'Magazine';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_magazine_series' => 'stanford_magazine_series',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-0542b860e9342e091050351aecc5f26f' => array(
          'module' => 'views',
          'delta' => '0542b860e9342e091050351aecc5f26f',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
        'views-912455664e3d519fccc97d734b33ee3c' => array(
          'module' => 'views',
          'delta' => '912455664e3d519fccc97d734b33ee3c',
          'region' => 'content_lower',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks that show up on Magazine Series nodes.');
  t('Magazine');
  $export['stanford_magazine_series'] = $context;

  return $export;
}
