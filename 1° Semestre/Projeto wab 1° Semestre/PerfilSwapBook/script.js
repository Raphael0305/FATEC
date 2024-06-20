$(document).ready(function(){
    $('.nav-item.dropdown').hover(function() {
        $(this).find('.dropdown-toggle').dropdown('toggle');
    });
});