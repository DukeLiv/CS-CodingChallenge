#include <stdio.h>
#include <string.h>

char P[52][52];

int solution(int L)
{
    // Write solution here
    return 0;
}

int main()
{
    int L;
    scanf("%d", &L);

    for (int i = 0; i < L; i++)
    {
        scanf("%s", &P[i][1]);
    }

    int answer = solution(L);
    printf("%d", answer);

    fflush(stdout);

    return 0;
}
