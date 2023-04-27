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

function solution(cutoffScore, scoresLength, scores) {
    // Write solution here
    return 0;
}

function main() {
    var cutoffScore = parseInt(readLine());

    var scoresLength = parseInt(readLine());

    var scores = readLine().split(' ').map(Number);

    var answer = solution(cutoffScore, scoresLength, scores);
    console.log(answer);
}
