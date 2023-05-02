#include <stdio.h>
#include <string.h>

#define MAX_CHAR 52

int solution(char* files)
{
    int freq[MAX_CHAR] = {0};
    int len = strlen(files);

    for (int i = 0; i < len; i++)
    {
        char c = files[i];

        if (c >= 'a' && c <= 'z') freq[c - 'a']++;
        else if (c >= 'A' && c <= 'Z') freq[c - 'A' + 26]++;
    }

    int palindrome_length = 0;
    int odd_count = 0;

    for (int i = 0; i < MAX_CHAR; i++)
    {
        if (freq[i] % 2 == 0) palindrome_length += freq[i];
        else
        {
            palindrome_length += freq[i] - 1;
            odd_count++;
        }
    }

    if (odd_count > 0) palindrome_length++;

    return palindrome_length;
}

int main()
{
    char files[20000];
    scanf("%s", files);

    int answer = solution(files);
    printf("%d\n", answer);

    return 0;
}
