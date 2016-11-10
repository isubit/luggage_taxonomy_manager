<?php
/**
 * @file
 * luggage_taxonomy_manager.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_taxonomy_manager_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access taxonomy manager view'.
  $permissions['access taxonomy manager view'] = array(
    'name' => 'access taxonomy manager view',
    'roles' => array(
      'taxonomy editor' => 'taxonomy editor',
    ),
    'module' => 'luggage_taxonomy_manager',
  );

  return $permissions;
}
