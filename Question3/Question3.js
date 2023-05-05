'use strict';

const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

function solution(N, M, P) {
    let is_sorted = true;
    let index = 0;
    let sum = P[index];

    for (let i = 0; i < N - 1; i++) {
        if (P[i] > P[i + 1]) {
            is_sorted = false;
            break;
        }
    }

    if (is_sorted) return 1;

    while (index < N && sum <= M) {
        for (let i = 0; i < index + 1; i++) {
            if (P[i] > P[i + 1]) {
                let temp = P[i];
                P[i] = P[i + 1];
                P[i + 1] = temp;
            }
        }

        index++;
        sum += P[index];
    }

    for (let i = 0; i < N - 1; i++) if (P[i] > P[i + 1]) return 0;

    return 1;
}

readline.question('', firstLine => {
    const [N, M] = firstLine.split(' ').map(Number);

    readline.question('', secondLine => {
        const P = secondLine.split(' ').map(Number);

        const answer = solution(N, M, P);
        console.log(answer);

        readline.close();
    });
});
