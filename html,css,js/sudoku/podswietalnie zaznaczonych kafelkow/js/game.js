generateBoard();

const blocks = document.getElementsByClassName('blocks');
const tiles = document.getElementsByClassName('block-tile');


function generateBoard() {
    let output = '';
    let cRow = 1, cCol = 1;
    for(let i = 0; i < 9; i++) {
        output += '<div class="board-block">';
        for(let j = 0; j < 9; j++) {
            output += '<div class="block-tile row'+cRow+' col'+(cCol++)+'"><span class="tile-num"></span></div>';
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
}

for(let i = 0; i < tiles.length; i++) {
    tiles[i].addEventListener('click', function(event) {
        tileClick(i);
    })
}

function tileClick(id) {
    clearActivatedTiles();
    let row = (tiles[id].classList[1]);
    console.log(row);
    let col = (tiles[id].classList[2]);
    console.log(col);
    for(let i=0; i< tiles.length; i++){
        if(tiles[i].classList.contains(row)) {
            tiles[i].classList.add('tile-activated');
        }
    }
    for(let i=0; i< tiles.length; i++){
        if(tiles[i].classList.contains(col)) {
            tiles[i].classList.add('tile-activated');
        }
    }
    let parentTiles = tiles[id].parentElement.getElementsByClassName('block-tile');
    for(let i=0; i<9; i++){
        parentTiles[i].classList.add('tile-activated');
    }
}

function clearActivatedTiles(){
    for(let i=0; i< tiles.length; i++){
        if(tiles[i].classList.contains('tile-activated')){
            tiles[i].classList.remove('tile-activated');
        }
    }
}