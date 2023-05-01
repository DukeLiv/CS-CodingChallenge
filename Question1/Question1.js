'use strict';

const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

function solution(n) {
    let even = 0;
    let odd = 0;

    for (let i = 1; i <= Math.sqrt(n); i++) {
        if (n % i === 0) {
            if (i % 2 === 0) even++;
            else odd++;

            if ((n / i) % 2 === 0) even++;
            else if (n / i !== i) odd++;
        }
    }

    if (even > odd) return "BUY";
    else if (even < odd) return "SELL";
    else return "PASS";
}

readline.question('', n => {
    const answer = solution(parseInt(n));
    console.log(answer);

    readline.close();
});
