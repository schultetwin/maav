<?php
/**
 * @file
 * maav_ldap.ldap_authorization.inc
 */

/**
 * Implements hook_default_ldap_authorization().
 */
function maav_ldap_default_ldap_authorization() {
  $export = array();

  $consumer_type = new stdClass;
  $consumer_type->disabled = FALSE; /* Edit this to true to make a default consumer_type disabled initially */
  $consumer_type->api_version = 1;
  $consumer_type->sid = 'umich';
  $consumer_type->consumer_type = 'drupal_role';
  $consumer_type->consumer_module = 'ldap_authorization_drupal_role';
  $consumer_type->description = 'Owners => Team Leads';
  $consumer_type->status = TRUE;
  $consumer_type->only_ldap_authenticated = TRUE;
  $consumer_type->derive_from_dn = FALSE;
  $consumer_type->derive_from_dn_attr = '';
  $consumer_type->derive_from_attr = FALSE;
  $consumer_type->derive_from_attr_attr = '';
  $consumer_type->derive_from_attr_use_first_attr = FALSE;
  $consumer_type->derive_from_entry = TRUE;
  $consumer_type->derive_from_entry_entries = 'cn=Michigan Autonomous Aerial Vehicles,ou=user groups,ou=groups,dc=umich,dc=edu
cn=maav11-exec,ou=user groups,ou=groups,dc=umich,dc=edu';
  $consumer_type->derive_from_entry_attr = 'member';
  $consumer_type->derive_from_entry_search_all = TRUE;
  $consumer_type->mappings = 'maav11-exec|Team Lead
Michigan Autonomous Aerial Vehicles|Team Member
';
  $consumer_type->use_filter = TRUE;
  $consumer_type->synch_to_ldap = FALSE;
  $consumer_type->synch_on_logon = TRUE;
  $consumer_type->revoke_ldap_provisioned = TRUE;
  $consumer_type->create_consumers = FALSE;
  $consumer_type->regrant_ldap_provisioned = TRUE;
  $export['drupal_role'] = $consumer_type;

  return $export;
}
