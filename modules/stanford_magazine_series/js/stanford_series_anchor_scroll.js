(function($) {
  Drupal.behaviors.stanfordseriesanchorscroll = {
    attach: function(context, settings) {
      $(".scroll-next").click(function() {
        var nextArticle = $(this).find("a").attr("href");
        console.log(nextArticle);
        $("html, body").animate({
          scrollTop: $(nextArticle).offset().top
        }, 2000);
      });
    }
  }
})(jQuery);
