const blocks = document.getElementsByClassName('blocks');
const tiles = document.getElementsByClassName('block-tile');
const numPadNums = document.getElementsByClassName('numpad-num');
const win = document.getElementById('win');
let events = [];

let activeTile;
let activeTileId;

const defPlane = [
    1, 2, 3, 4, 5, 6, 7, 8, 9,
    4, 5, 6, 7, 8, 9, 1, 2, 3,
    7, 8, 9, 1, 2, 3, 4, 5, 6,
    2, 3, 1, 5, 6, 4, 8, 9, 7,
    5, 6, 4, 8, 9, 7, 2, 3, 1,
    8, 9, 7, 2, 3, 1, 5, 6, 4,
    3, 1, 2, 6, 4, 5, 9, 7, 8,
    6, 4, 5, 9, 7, 8, 3, 1, 2,
    9, 7, 8, 3, 1, 2, 6, 4, 5
]

for(let i = 0; i < numPadNums.length; i++) {
    numPadNums[i].addEventListener('click', function(event) {
        numClick(i+1);
    })
}
function numClick(x){
    if(!activeTile) return;
    if(activeTile.classList.contains('tile-blocked')) return;
    if(activeTile.children[0].innerHTML !== x.toString()) setEvent();
    activeTile.children[0].innerHTML = x.toString();
    if(activeTile.classList.contains('tile-error')) clearHighlightErrors();
    highlightErrors(activeTile);
    clearHighlightedNums()
    highlightNums();
    checkWin();
}

function setEvent() {
    events.unshift([activeTile, activeTile.children[0].innerHTML]);
    if(events.length >= 10) events.pop();
}

document.getElementById('undoBtn').addEventListener('click', fUndo);
document.getElementById('eraseBtn').addEventListener('click', fErase);

function fUndo(){
    events[0][0].children[0].innerHTML = events[0][1].toString();
    if(events[0][0].classList.contains('tile-error')) clearHighlightErrors();
    clearHighlightedNums();
    highlightNums();
    highlightErrors(events[0][0]);
    events.shift();
}

function fErase(){
    numClick('');
    highlightNums();
}

function isNum(val){
    return !isNaN(val);
}

window.addEventListener("keydown", function (event) {
    if(!activeTile) return;
    if (event.defaultPrevented) {
        return;
    }
    let e = event.key;
    if(e === "Backspace" || e === "0") {
        fErase();
        return
    }
    if(isNum(e)){
        numClick(e);
        return;
    }
    if(e.substring(0, 5) === "Arrow") {
        navArrow(e);
    }
}, true);

function navArrow(arrow) {
    if(!activeTile) return;
    let cRow = activeTile.classList[1].substring(3);
    let cCol = activeTile.classList[2].substring(3);
    switch(arrow) {
        case "ArrowLeft":
            if(parseInt(cCol) !== 1) cCol--;
            else cCol = 9;
            break;
        case "ArrowRight":
            if(parseInt(cCol) !== 9) cCol++;
            else cCol = 1;
            break;
        case "ArrowUp":
            if(parseInt(cRow) !== 1) cRow--;
            else cRow = 9;
            break;
        case "ArrowDown":
            if(parseInt(cRow) !== 9) cRow++;
            else cRow = 1;
            break;
    }
    tileClick(getElementId(document.getElementsByClassName('row'+cRow+' col'+cCol)[0]));
}

function getElementId(elem) {
    for(let i = 0; i < tiles.length; i++) {
        if(tiles[i] === elem) {
            return i;
        }
    }
}

generateBoard();

function generateBoard() {
    let output = '';
    let cRow = 1, cCol = 1;
    for(let i = 0; i < 9; i++) {
        output += '<div class="board-block">';
        for(let j = 0; j < 9; j++) {
            output += '<div class="block-tile row'+cRow+' col'+(cCol++)+' tile-blocked"><span class="tile-num"></span></div>';
            if((j+1) % 3 === 0 && j !== 0) {
                cCol -= 3;
                cRow++;
            }
        }
        if(cCol % 7 === 0) {
            cCol = 1;
        } else {
            cCol += 3;
            cRow -= 3;
        }
        output += '</div>'
    }
    document.getElementById('board').innerHTML = output;
    generatePlane();
}

for(let i = 0; i < tiles.length; i++) {
    tiles[i].addEventListener('click', function(event) {
        tileClick(i);
    })
}

function tileClick(id) {
    clearHighlightedTiles();
    if(activeTile)
        activeTile.classList.remove('tile-activated');
    activeTile = tiles[id];
    activeTileId = id;
    activeTile.classList.add('tile-activated');
    let row = (tiles[id].classList[1]);
    let col = (tiles[id].classList[2]);
    for(let i=0; i< tiles.length; i++){
        if(tiles[i].classList.contains(row)) {
            tiles[i].classList.add('tile-highlight');
        }
    }
    for(let i=0; i< tiles.length; i++){
        if(tiles[i].classList.contains(col)) {
            tiles[i].classList.add('tile-highlight');
        }
    }
    let parentTiles = tiles[id].parentElement.getElementsByClassName('block-tile');
    for(let i=0; i<9; i++){
        parentTiles[i].classList.add('tile-highlight');
    }
    highlightNums();
}

function highlightNums() {
    let selectedValue = activeTile.children[0].innerHTML;
    if(selectedValue === '') return;
    for(let i = 0; i < tiles.length; i++) {
        if(tiles[i].children[0].innerHTML === selectedValue)
            tiles[i].classList.add('tile-highlightl');
    }
}

function clearHighlightedNums() {
    for(let i = 0; i < tiles.length; i++) {
        if(tiles[i].classList.contains('tile-highlightl')){
            tiles[i].classList.remove('tile-highlightl');
        }
    }
}

function clearHighlightedTiles(){
    for(let i=0; i < tiles.length; i++){
        if(tiles[i].classList.contains('tile-highlight')){
            tiles[i].classList.remove('tile-highlight');
        }
        if(tiles[i].classList.contains('tile-highlightl')){
            tiles[i].classList.remove('tile-highlightl');
        }
    }
}

function generatePlane() {
    for(let i = 0; i < tiles.length; i++) {
        tiles[i].children[0].innerHTML = defPlane[i].toString();
    }
    for(let i = 0; i < 9; i++) {
        let x = Math.floor(Math.random() * 9) + 1;
        let y = Math.floor(Math.random() * 9) + 1;
        if(x === y) {
            i--;
            break;
        }
        for(let j = 0; j < tiles.length; j++) {
            let cTileValue = parseInt(tiles[j].children[0].innerHTML);
            if(cTileValue === x) tiles[j].children[0].innerHTML = y.toString();
            if(cTileValue === y) tiles[j].children[0].innerHTML = x.toString();
        }
    }
    for(let i = 0; i < 9; i++) {
        let hidden = 0;
        for(let j = 0; j < 9; j++) {
            if(hidden === 8) break;
            if(Math.floor(Math.random() * 14) >= 7) {
                document.getElementsByClassName('board-block')[i].children[j].children[0].innerHTML = '';
                document.getElementsByClassName('board-block')[i].children[j].classList.remove('tile-blocked');
                hidden++;
            }
        }
        if(hidden === 0) i--;
    }
}

function highlightErrors(elem) {
    let num = parseInt(elem.children[0].innerHTML);
    let blockTiles = elem.parentElement.children;
    let rowTiles = document.getElementsByClassName(elem.classList[1]);
    let colTiles = document.getElementsByClassName(elem.classList[2]);
    for(let i = 0; i < 9; i++) {
        if(num === parseInt(blockTiles[i].children[0].innerHTML) && elem !== blockTiles[i]){
            if(!elem.classList.contains('tile-error') && !elem.classList.contains('tile-blocked')) elem.classList.add('tile-error');
            if(!blockTiles[i].classList.contains('tile-error')) blockTiles[i].classList.add('tile-error');
        }
        if(num === parseInt(rowTiles[i].children[0].innerHTML) && elem !== rowTiles[i]){
            if(!elem.classList.contains('tile-error') && !elem.classList.contains('tile-blocked')) elem.classList.add('tile-error');
            if(!rowTiles[i].classList.contains('tile-error')) rowTiles[i].classList.add('tile-error');
        }
        if(num === parseInt(colTiles[i].children[0].innerHTML) && elem !== colTiles[i]){
            if(!elem.classList.contains('tile-error') && !elem.classList.contains('tile-blocked')) elem.classList.add('tile-error');
            if(!colTiles[i].classList.contains('tile-error')) colTiles[i].classList.add('tile-error');
        }
    }
}

function clearHighlightErrors() {
    for(let i = 0; i < tiles.length; i++) {
        if(tiles[i].classList.contains('tile-error')) {
            if(check(tiles[i])) {
                tiles[i].classList.remove('tile-error');
            }
        }
    }
}

function check(elem) {
    let m=0;
    if (elem.children[0].innerHTML === '') return true;
    let num = parseInt(elem.children[0].innerHTML);
    let blockTiles = elem.parentElement.children;
    for(let i = 0; i < 9; i++){
        if(num === parseInt(blockTiles[i].children[0].innerHTML)){
            m++;
            if(m>1){
                return false;
            }
        }
    }
    let rowTiles = document.getElementsByClassName(elem.classList[1]);
    m=0;
    for(let i = 0; i < 9; i++){
        if(num === parseInt(rowTiles[i].children[0].innerHTML)){
            m++;
            if(m>1){
                return false;
            }
        }
    }
    let colTiles = document.getElementsByClassName(elem.classList[2]);
    m=0;
    for(let i = 0; i < 9; i++){
        if(num === parseInt(colTiles[i].children[0].innerHTML)){
            m++;
            if(m>1){
                return false;
            }
        }
    }
    return true;
}

function checkWin() {
    for(let i = 0; i < tiles.length; i++) {
        if(tiles[i].children[0].innerHTML === '' || tiles[i].classList.contains('tile-error')) {
            return;
        }
    }
    win.style.display = 'block';
}