<?php
/**
 * @file
 * stanford_magazine_issue.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_magazine_issue_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create stanford_magazine_issue content'.
  $permissions['create stanford_magazine_issue content'] = array(
    'name' => 'create stanford_magazine_issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any stanford_magazine_issue content'.
  $permissions['delete any stanford_magazine_issue content'] = array(
    'name' => 'delete any stanford_magazine_issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own stanford_magazine_issue content'.
  $permissions['delete own stanford_magazine_issue content'] = array(
    'name' => 'delete own stanford_magazine_issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any stanford_magazine_issue content'.
  $permissions['edit any stanford_magazine_issue content'] = array(
    'name' => 'edit any stanford_magazine_issue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own stanford_magazine_issue content'.
  $permissions['edit own stanford_magazine_issue content'] = array(
    'name' => 'edit own stanford_magazine_issue content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
