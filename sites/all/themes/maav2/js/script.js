(function ($) {
  Drupal.behaviors.maav2 = {
    attach: function (context, settings) {
      $('.region-sidebar-first, .region-content').equalHeightColumns();
    }
  }
})(jQuery);
