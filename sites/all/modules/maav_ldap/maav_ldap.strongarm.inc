<?php
/**
 * @file
 * maav_ldap.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function maav_ldap_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_authentication_conf';
  $strongarm->value = array(
    'sids' => array(
      'umich' => 'umich',
    ),
    'authenticationMode' => 1,
    'loginConflictResolve' => 2,
    'acctCreation' => 4,
    'loginUIUsernameTxt' => 'Enter Unique Name',
    'loginUIPasswordTxt' => 'Enter Umich kerberos Password',
    'ldapUserHelpLinkUrl' => NULL,
    'ldapUserHelpLinkText' => 'Logon Help',
    'emailOption' => 3,
    'emailUpdate' => 1,
    'allowOnlyIfTextInDn' => array(),
    'excludeIfTextInDn' => array(),
    'allowTestPhp' => '',
    'excludeIfNoAuthorizations' => NULL,
    'ssoRemoteUserStripDomainName' => NULL,
    'seamlessLogin' => NULL,
    'ldapImplementation' => NULL,
    'cookieExpire' => NULL,
  );
  $export['ldap_authentication_conf'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_profile_conf';
  $strongarm->value = array(
    'ldap_fields' => array(
      0 => 'uid',
      1 => 'mail',
    ),
    'mapping' => array(
      'username' => 'uid',
      'mail' => 'mail',
      'field_user_first_name' => '[givenname]',
      'field_user_last_name' => '[sn]',
    ),
    'derivedMapping' => array(
      'field_user_degree_information' => array(
        'derive' => FALSE,
        'derive_value' => '',
      ),
      'field_user_first_name' => array(
        'derive' => FALSE,
        'derive_value' => '',
      ),
      'field_user_last_name' => array(
        'derive' => FALSE,
        'derive_value' => '',
      ),
    ),
  );
  $export['ldap_profile_conf'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_servers_encryption';
  $strongarm->value = 10;
  $export['ldap_servers_encryption'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_servers_require_ssl_for_credentails';
  $strongarm->value = 0;
  $export['ldap_servers_require_ssl_for_credentails'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'securelogin_form_user_login';
  $strongarm->value = 1;
  $export['securelogin_form_user_login'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'securelogin_form_user_login_block';
  $strongarm->value = 1;
  $export['securelogin_form_user_login_block'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'securelogin_form_user_pass_reset';
  $strongarm->value = 1;
  $export['securelogin_form_user_pass_reset'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'securelogin_form_user_register_form';
  $strongarm->value = 1;
  $export['securelogin_form_user_register_form'] = $strongarm;

  return $export;
}
