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
        'views-27cc0f9e49acab80f2a5eebb4b19cbc5' => array(
          'module' => 'views',
          'delta' => '27cc0f9e49acab80f2a5eebb4b19cbc5',
          'region' => 'content_lower',
          'weight' => '-8',
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
