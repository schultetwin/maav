<?php
/**
* @file
* Listing bean plugin.
*/

class maav_info_block_bean extends BeanPlugin {



  /**
   * Displays the bean.
   */
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {
    $result = parent::view($bean, $content, $view_mode, $langcode);
    foreach ($result['bean'] as &$block) {
      $block['field_maav_info_block_image']['#printed'] = TRUE;
    }
    return $result;
  }

}
