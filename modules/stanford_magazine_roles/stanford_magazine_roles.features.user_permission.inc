<?php
/**
 * @file
 * stanford_magazine_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_magazine_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer default image node:stanford_magazine_article:field_s_mag_article_image'.
  $permissions['administer default image node:stanford_magazine_article:field_s_mag_article_image'] = array(
    'name' => 'administer default image node:stanford_magazine_article:field_s_mag_article_image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'default_image_ft',
  );

  // Exported permission: 'create stanford_magazine_article content'.
  $permissions['create stanford_magazine_article content'] = array(
    'name' => 'create stanford_magazine_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stanford_magazine_article content'.
  $permissions['delete any stanford_magazine_article content'] = array(
    'name' => 'delete any stanford_magazine_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stanford_magazine_article content'.
  $permissions['delete own stanford_magazine_article content'] = array(
    'name' => 'delete own stanford_magazine_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in stanford_magazine_eyebrow'.
  $permissions['delete terms in stanford_magazine_eyebrow'] = array(
    'name' => 'delete terms in stanford_magazine_eyebrow',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in stanford_magazine_series'.
  $permissions['delete terms in stanford_magazine_series'] = array(
    'name' => 'delete terms in stanford_magazine_series',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in stanford_magazine_topics'.
  $permissions['delete terms in stanford_magazine_topics'] = array(
    'name' => 'delete terms in stanford_magazine_topics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any stanford_magazine_article content'.
  $permissions['edit any stanford_magazine_article content'] = array(
    'name' => 'edit any stanford_magazine_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stanford_magazine_article content'.
  $permissions['edit own stanford_magazine_article content'] = array(
    'name' => 'edit own stanford_magazine_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in stanford_magazine_eyebrow'.
  $permissions['edit terms in stanford_magazine_eyebrow'] = array(
    'name' => 'edit terms in stanford_magazine_eyebrow',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in stanford_magazine_series'.
  $permissions['edit terms in stanford_magazine_series'] = array(
    'name' => 'edit terms in stanford_magazine_series',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in stanford_magazine_topics'.
  $permissions['edit terms in stanford_magazine_topics'] = array(
    'name' => 'edit terms in stanford_magazine_topics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
