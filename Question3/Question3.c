#include <stdio.h>

int solution(int N, int M, int P[])
{
    // Write solution here
    return 0;
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int P[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &P[i]);
    }

    int answer = solution(N, M, P);
    printf("%d\n", answer);

    return 0;
}
