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

function solution(n, m, costs) {
    // Write solution here
    return 0;
}

function main() {
    const firstLine = readLine().split(' ');
    const secondLine = readLine().split(' ');

    const n = parseInt(firstLine[0], 10);
    const m = parseInt(firstLine[1], 10);

    const costs = secondLine.map(x => parseInt(x, 10));

    const answer = solution(n, m, costs);
    console.log(answer);
}
