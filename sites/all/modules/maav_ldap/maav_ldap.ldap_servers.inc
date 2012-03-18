<?php
/**
 * @file
 * maav_ldap.ldap_servers.inc
 */

/**
 * Implements hook_default_ldap_servers().
 */
function maav_ldap_default_ldap_servers() {
  $export = array();

  $ldap_servers_conf = new stdClass;
  $ldap_servers_conf->disabled = FALSE; /* Edit this to true to make a default ldap_servers_conf disabled initially */
  $ldap_servers_conf->api_version = 1;
  $ldap_servers_conf->sid = 'umich';
  $ldap_servers_conf->name = 'University of Michigan';
  $ldap_servers_conf->status = TRUE;
  $ldap_servers_conf->ldap_type = 'default';
  $ldap_servers_conf->address = 'ldap.umich.edu';
  $ldap_servers_conf->port = 389;
  $ldap_servers_conf->tls = FALSE;
  $ldap_servers_conf->bind_method = TRUE;
  $ldap_servers_conf->binddn = 'uid=mjschul,ou=People,dc=umich,dc=edu';
  $ldap_servers_conf->bindpw = '8,./b1rthdaY1993';
  $ldap_servers_conf->basedn = array(
    0 => 'ou=People,dc=umich,dc=edu',
  );
  $ldap_servers_conf->user_attr = 'uid';
  $ldap_servers_conf->mail_attr = 'mail';
  $ldap_servers_conf->mail_template = '';
  $ldap_servers_conf->allow_conflicting_drupal_accts = FALSE;
  $ldap_servers_conf->unique_persistent_attr = '';
  $ldap_servers_conf->user_dn_expression = '';
  $ldap_servers_conf->ldap_to_drupal_user = '';
  $ldap_servers_conf->testing_drupal_username = 'mjschul';
  $ldap_servers_conf->weight = 0;
  $export['umich'] = $ldap_servers_conf;

  return $export;
}
