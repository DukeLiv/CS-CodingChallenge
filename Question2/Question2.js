'use strict';

const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

function solution(files) {
    const freq = {};
    const len = files.length;

    for (let i = 0; i < len; i++) {
        const char = files[i];

        freq[char] = freq[char] ? freq[char] + 1 : 1;
    }

    let palindrome_length = 0;
    let has_odd = false;

    for (const char in freq) {
        const count = freq[char];

        if (count % 2 === 0) palindrome_length += count;
        else {
            palindrome_length += count - 1;
            has_odd = true;
        }
    }

    if (has_odd) palindrome_length++;

    return palindrome_length;
}

readline.question('', files => {
    const answer = solution(files);
    console.log(answer);

    readline.close();
});
