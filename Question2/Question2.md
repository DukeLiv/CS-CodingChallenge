# File Reorganization

Credit Suisse wants to re-organize its files in a palindromic way. Each file is labelled with a single character from a-z (26 letters) or A-Z (26 letters). Files can have duplicate names. Given an input string, files, where files[i] is the i<sup>th</sup> label of ith file, write an algorithm to find the longest palindromic file arrangement that can be constructed using the given file labels.

File labels are case-sensitive, i.e. "Bb" is not a palindromic arrangement here.

Note: a palindrome is a sequence of characters which reads the same backward as forward, such as madam.

## Constraints

1 <= files.length <= 2000 files consist of lowercase and/or uppercase English letters only.

## Input Format

String - File label with characters from a-z (26 letters) or A-Z (26 letters).

## Output Format

Integer - The longest palindromic file arrangement that can be constructed.

## Examples

### Example 1

```bash
Input            |   Output
```

```bash
abccccdd         |   7
```

<hr/>
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.

### Example 2

```bash
Input            |   Output
```

```bash
a                |   1
```

<hr/>
Explanation: The longest palindrome that can be built is "a", whose length is 1.
