let hints = false;

const bulb = document.getElementsByClassName('bulb')[0];
bulb.addEventListener('click', function(event){
    if(bulb.classList.contains('bulb-light')) bulb.classList.remove('bulb-light');
    else bulb.classList.add('bulb-light');
    hints = !hints;
})