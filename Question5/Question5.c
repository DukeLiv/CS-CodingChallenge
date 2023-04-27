#include <stdio.h>

int solution(int cutoffScore, int scores[], int scoresLength)
{
    // Write solution here
    return 0;
}

int main()
{
    int cutoffScore;
    scanf("%d\n", &cutoffScore);

    int size = 0;
    scanf("%d\n", &size);

    int scores[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &scores[i]);
    }

    int answer = solution(cutoffScore, scores, size);
    printf("%d\n", answer);

    return 0;
}
