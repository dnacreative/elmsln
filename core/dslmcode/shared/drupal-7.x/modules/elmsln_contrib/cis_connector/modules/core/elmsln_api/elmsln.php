<?php
/**
 * @file
 * An optimized page execution used for ELMSLN API calls for a
 * minimally bootstrapped Drupal installation.
 */

/**
 * Root directory of Drupal installation.
 */
define('DRUPAL_ROOT', getcwd());

/**
 * Required core files needed to run any request.
 */
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
require_once DRUPAL_ROOT . '/includes/common.inc';
require_once DRUPAL_ROOT . '/includes/module.inc';
require_once DRUPAL_ROOT . '/includes/unicode.inc';
require_once DRUPAL_ROOT . '/includes/file.inc';

// Bootstrap Drupal to at least the database level so it can be accessed.
drupal_bootstrap(DRUPAL_BOOTSTRAP_DATABASE);

// Load the ELMSLN API module and execute request.
drupal_load('module', 'elmsln_api');
elmsln_api_execute_request();
