<?php
/**
 * @file
 * luggage_taxonomy_manager.features.inc
 */

/**
 * Implements hook_views_api().
 */
function luggage_taxonomy_manager_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/*
 * Implements hook_preprocess_html.
 */
function luggage_taxonomy_manager_preprocess_html(&$vars) {
  // Override suitcase_interim styles for this site.
  global $theme;
  if ($theme == 'suitcase_interim') {
    drupal_add_css(drupal_get_path('module', 'luggage_taxonomy_manager') . '/luggage_taxonomy_manager.css', array('group' => 200));
  }
}
