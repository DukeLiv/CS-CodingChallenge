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

function solution(P, L) {
    // Write solution here
    return 0;
}

function main() {
    const L = parseInt(readLine().trim(), 10);

    let P = [];
    for (let i = 0; i < L; i++) {
        const temp = readLine();
        P.push(temp);
    }

    var answer = solution(P, L);
    console.log(answer);
}
