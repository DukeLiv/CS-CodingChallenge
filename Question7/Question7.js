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

function solution(n, l, transfers) {
    // Write solution here
    return false;
}

function main() {
    const firstLine = readLine().split(' ');

    const n = parseInt(firstLine[0]);
    const l = parseInt(firstLine[1]);

    let transfers = [];
    for (let i = 0; i < l; i++) {
        const temp = readLine().split(' ');
        transfers.push([parseInt(temp[0]), parseInt(temp[1])]);
    }

    const answer = solution(n, l, transfers);
    console.log(answer ? 'Ineligible' : 'Eligible');
}
