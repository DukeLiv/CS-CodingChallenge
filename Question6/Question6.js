'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function solution(n, flows) {
    // Write solution here
    return "";
}

function main() {
    var n = parseInt(readLine());

    var flows = readLine().split(' ').map(Number);

    var answer = solution(n, flows);
    console.log(answer);
}
