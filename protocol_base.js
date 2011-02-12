Drupal.behaviors.addToPage = function() {
  $('.bookmark-this-page').click(function() {
    $('body')
      .addClass('overlay')
      .append('<div class="overlay-outer">&nbsp;</div>')
      .append(
        $('<div class="overlay-wrapper">').append(
          $('<div class="overlay-inner">')
            .append($(Drupal.settings.addForm).find('#edit-category').change(function() {
              if ($(this).val() == 'add') {
                $(this).parents('form').find('#edit-name').show();
              }
              else {
                $(this).parents('form').find('#edit-name').hide();
              }
            }).end())
        )
      );
    return false;
  });
}