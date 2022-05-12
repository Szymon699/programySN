const numpad = document.getElementById("numpad");
const numpadBtn = document.getElementById('numpadBtn');

document.getElementsByClassName('numpad-close')[0].addEventListener('click', function(event) {
    numpad.classList.remove('numpad-show');
})

numpadBtn.addEventListener('click', function(event){
    if(numpad.classList.contains('numpad-show')) numpad.classList.remove('numpad-show');
    else numpad.classList.add('numpad-show');
})

dragElement(numpad);

function dragElement(elmnt) {
    let pos1 = 0, pos2 = 0, pos3 = 0, pos4 = 0;
    if (document.getElementById(elmnt.id + "-header")) {
        document.getElementById(elmnt.id + "-header").onmousedown = dragMouseDown;
    } else {
        elmnt.onmousedown = dragMouseDown;
    }

    function dragMouseDown(e) {
        e.preventDefault();
        pos3 = e.clientX;
        pos4 = e.clientY;
        document.onmouseup = closeDragElement;
        document.onmousemove = elementDrag;
    }

    function elementDrag(e) {
        e.preventDefault();
        pos1 = pos3 - e.clientX;
        pos2 = pos4 - e.clientY;
        pos3 = e.clientX;
        pos4 = e.clientY;
        elmnt.style.top = (elmnt.offsetTop - pos2) + "px";
        elmnt.style.left = (elmnt.offsetLeft - pos1) + "px";
    }

    function closeDragElement() {
        document.onmouseup = null;
        document.onmousemove = null;
    }
}