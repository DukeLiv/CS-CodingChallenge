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

function solution(n, employees, shifts) {
    // Write solution here
}

function main() {
    const firstLine = readLine().split(' ');

    const n = parseInt(firstLine[0]);

    const employees = readLine().split(' ');

    let shifts = [];
    for (let i = 0; i < n; i++) {
        const temp = readLine().split(' ');
        shifts.push([parseInt(temp[0]), parseInt(temp[1])]);
    }

    const answer = solution(n, employees, shifts);
}
