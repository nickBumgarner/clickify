<?php

/**
 * @file
 * clickify administration pages.
 */

/**
 * Returns with the general configuration form.
 */
function clickify_admin_settings($form, &$form_state) {

  
  $form['clickify_jquery_selector'] = array(
    '#type' => 'textarea',
    '#title' => t('Apply clickify to the following elements'),
    '#description' => t('A comma-separated list of jQuery selectors to apply Clickify to, such as <code>.node-teaser</code> or <code>.clickify-element</code>.'),
    '#default_value' => variable_get('clickify_jquery_selector', ''),
  );


  return system_settings_form($form);
}
