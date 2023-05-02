def solution(files):
    freq = [0] * 128

    for c in files: freq[ord(c)] += 1

    palindrome_length = 0

    for i in freq:
        palindrome_length += i // 2 * 2
        if palindrome_length % 2 == 0 and i % 2 == 1:
            palindrome_length += 1

    return palindrome_length

def main():
    str = input()
    answer = solution(str)
    print(answer)

if __name__ == "__main__":
    main()
