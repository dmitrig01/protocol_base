<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function protocol_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(),
  );

  // Exported permission: create protocol content
  $permissions['create protocol content'] = array(
    'name' => 'create protocol content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own protocol content
  $permissions['edit own protocol content'] = array(
    'name' => 'edit own protocol content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: manipulate own user queue
  $permissions['manipulate own user queue'] = array(
    'name' => 'manipulate own user queue',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
