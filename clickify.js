(function ($) {
  Drupal.behaviors.clickify = {
    attach: function (context) {
      $(Drupal.settings.clickify.selector, context)
          .each(function () {
            $(this).css('cursor', 'pointer');
            $(this).click(function () {
              window.location = $(this).find("a").attr("href");
              return false;
            });
          });
      }
    }
  })(jQuery);
