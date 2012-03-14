(function ($) {
  Drupal.behaviors.maav2 = {
    attach: function (context, settings) {
      $(window).bind('load', function () {
        $('.columns-inner').equalHeightColumns({children : 1});
      });
    }
  }
})(jQuery);
