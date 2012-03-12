<?php
/**
 * @file
 * maav_info_blocks_feature.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function maav_info_blocks_feature_field_default_fields() {
  $fields = array();

  // Exported field: 'bean-maav_info_block_bean-field_maav_info_block_desc'
  $fields['bean-maav_info_block_bean-field_maav_info_block_desc'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_maav_info_block_desc',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'maav_info_block_bean',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The description that should go with this section.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'bean',
      'field_name' => 'field_maav_info_block_desc',
      'label' => 'Body',
      'required' => 1,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 3,
      ),
    ),
  );

  // Exported field: 'bean-maav_info_block_bean-field_maav_info_block_image'
  $fields['bean-maav_info_block_bean-field_maav_info_block_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_maav_info_block_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'maav_info_block_bean',
      'deleted' => '0',
      'description' => 'Image to display to the left of the text (trust me, it will look a lot better with the image)',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'section_info',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'bean',
      'field_name' => 'field_maav_info_block_image',
      'label' => 'Image',
      'required' => FALSE,
      'settings' => array(
        'alt_field' => 0,
        'file_directory' => 'images/section_info_blocks',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '130x110',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'section_info',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 1,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Image');
  t('Image to display to the left of the text (trust me, it will look a lot better with the image)');
  t('The description that should go with this section.');

  return $fields;
}
