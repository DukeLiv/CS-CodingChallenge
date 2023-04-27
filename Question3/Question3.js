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

function solution(N, M, P) {
    // Write solution here
    return 0;
}

function main() {
    const firstLine = readLine().split(' ');
    const secondLine = readLine().split(' ');

    const N = parseInt(firstLine[0], 10);
    const M = parseInt(firstLine[1], 10);
    const P = secondLine.map(pTemp => parseInt(pTemp, 10));

    const answer = solution(N, M, P);
    console.log(answer);
}
