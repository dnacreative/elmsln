<?php
/**
 * @file
 * elmsmedia_external_video.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function elmsmedia_external_video_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addanother_button_external_video';
  $strongarm->value = 1;
  $export['addanother_button_external_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addanother_message_external_video';
  $strongarm->value = 1;
  $export['addanother_message_external_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addanother_tab_edit_external_video';
  $strongarm->value = 1;
  $export['addanother_tab_edit_external_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addanother_tab_external_video';
  $strongarm->value = 1;
  $export['addanother_tab_external_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_external_video';
  $strongarm->value = 'edit-wysiwyg-template';
  $export['additional_settings__active_tab_external_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_external_video';
  $strongarm->value = 0;
  $export['diff_enable_revisions_page_node_external_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_external_video';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_external_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_external_video';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_external_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__external_video';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'iframe' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'image' => array(
        'custom_settings' => FALSE,
      ),
      'image__left' => array(
        'custom_settings' => FALSE,
      ),
      'image__right' => array(
        'custom_settings' => FALSE,
      ),
      'image__boxed' => array(
        'custom_settings' => FALSE,
      ),
      'image__lightboxed' => array(
        'custom_settings' => FALSE,
      ),
      'image__left__lightboxed' => array(
        'custom_settings' => FALSE,
      ),
      'image__right__lightboxed' => array(
        'custom_settings' => FALSE,
      ),
      'image__boxed__lightboxed' => array(
        'custom_settings' => FALSE,
      ),
      'mediavideo' => array(
        'custom_settings' => TRUE,
      ),
      'mediavideo__poster' => array(
        'custom_settings' => FALSE,
      ),
      'mediavideo__thumbnail' => array(
        'custom_settings' => FALSE,
      ),
      'mediavideo__thumbnail__right' => array(
        'custom_settings' => FALSE,
      ),
      'mediasvg' => array(
        'custom_settings' => FALSE,
      ),
      'mediasvg__left' => array(
        'custom_settings' => FALSE,
      ),
      'mediasvg__left__medium' => array(
        'custom_settings' => FALSE,
      ),
      'mediasvg__left__small' => array(
        'custom_settings' => FALSE,
      ),
      'mediasvg__right' => array(
        'custom_settings' => FALSE,
      ),
      'mediasvg__right__medium' => array(
        'custom_settings' => FALSE,
      ),
      'mediasvg__right__small' => array(
        'custom_settings' => FALSE,
      ),
      'mediasvg__stretch' => array(
        'custom_settings' => FALSE,
      ),
      'figurelabel' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__external_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_external_video';
  $strongarm->value = array();
  $export['menu_options_external_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_external_video';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_external_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_external_video';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_external_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_external_video';
  $strongarm->value = '0';
  $export['node_preview_external_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_external_video';
  $strongarm->value = 0;
  $export['node_submitted_external_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_template_default_external_video';
  $strongarm->value = '';
  $export['wysiwyg_template_default_external_video'] = $strongarm;

  return $export;
}
