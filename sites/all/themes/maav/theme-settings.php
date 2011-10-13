<?php
/**
 * Implements hook_form_system_theme_settings_alter().
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_state
 *   A keyed array containing the current state of the form.
 */
function maav_form_system_theme_settings_alter(&$form, &$form_state)  {

  // Create the form using Forms API: http://api.drupal.org/api/7

  /* -- Delete this line if you want to use this setting
  $form['STARTERKIT_example'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('STARTERKIT sample setting'),
    '#default_value' => theme_get_setting('STARTERKIT_example'),
    '#description'   => t("This option doesn't do anything; it's just an example."),
  );
  // */

  $form['maav_footer'] = array(
    '#type' => 'fieldset',
    '#title' => t('MAAV Footer'),
  );

  $form['maav_footer']['maav_footer_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Footer Text'),
    '#default_value' => theme_get_setting('maav_footer_text'),
    '#descripton' => t('MAAV Footer Text'),
  );

  // Remove some of the base theme's settings.
  unset($form['themedev']['zen_layout']); // We don't need to select the layout stylesheet.

  // We are editing the $form in place, so we don't need to return anything.
}
