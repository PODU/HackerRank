'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(str => str.trim());

    main();
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the timeConversion function below.
 */
function timeConversion(s) {
    var zone = s.slice(s.length - 2, s.length);
    s = s.slice(0, s.length - 2);
    var arr = s.split(":");
    var hour = parseInt(arr[0]);
    if(zone == "AM") {
        hour = hour % 12;
        arr[0] = "" + hour;
        if(arr[0].length == 1){
            arr[0] = "0" + arr[0];
        }
    } else {
        hour = hour % 12;
        hour = hour + 12;
        arr[0] = "" + hour;
    }
        
    return arr.join(':');
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const s = readLine();

    let result = timeConversion(s);

    ws.write(result + "\n");

    ws.end();
}

