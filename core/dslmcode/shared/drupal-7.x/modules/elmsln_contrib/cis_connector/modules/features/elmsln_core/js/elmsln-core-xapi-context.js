(function ($) {
  $(document).ready(function(){
    // set xapi additional data for send outs locally
    // this helps provide the same context to all statements
    // sent local to the current site
    Drupal.settings.tincanapi.elmslnCore = {};
    Drupal.settings.tincanapi.elmslnCore.course = Drupal.settings.elmslnCore.course;
    Drupal.settings.tincanapi.elmslnCore.section = Drupal.settings.elmslnCore.section;
    Drupal.settings.tincanapi.elmslnCore.url = Drupal.settings.elmslnCore.url;
    Drupal.settings.tincanapi.elmslnCore.title = Drupal.settings.elmslnCore.title;
    Drupal.settings.tincanapi.elmslnCore.role = Drupal.settings.elmslnCore.role;
    // attempt to spit xapi context into all iframes
    $('iframe.entity_iframe').load(function(e){
      var data = {
        "subject" : "elmsln.xapiContext",
        "course": Drupal.settings.elmslnCore.course,
        "section": Drupal.settings.elmslnCore.section,
        "url": Drupal.settings.elmslnCore.url,
        "title": Drupal.settings.elmslnCore.title,
        "role": Drupal.settings.elmslnCore.role
      };
      // check for hypothesis data attribute
      if ($(this).attr('data-xapi-hypothesis')) {
        data["hypothesis"] = $(this).attr('data-xapi-hypothesis');
      }
      var obj = this;
      // check frame
      var frame = $(obj).attr('src').split('://');
      frame = frame[1].split('/');
      frame = frame[0].split('.');
      var local = window.location.origin.split('://');
      local = local[1].split('.');
      // validate that the subdomain is the same in each
      if (frame.pop() == local.pop() && frame.pop() == local.pop()) {
        obj.contentWindow.postMessage(data, $(obj).attr('src'));
      }
    });
  });
})(jQuery);