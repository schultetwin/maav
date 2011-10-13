<?php
/**
 * @file
 * maav_media.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function maav_media_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'Quadrotor Outdoor Flight',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'media',
  'language' => 'und',
  'created' => '1318475279',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'group_audience' => array(),
  'field_media_media' => array(
    'und' => array(
      0 => array(
        'fid' => '1',
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1318475279',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-10-12 23:07:59 -0400',
);
  return $nodes;
}
