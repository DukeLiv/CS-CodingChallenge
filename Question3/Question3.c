#include <stdbool.h>
#include <stdio.h>

int solution(int N, int M, int P[])
{
    bool is_sorted = true;
    int index = 0;
    int sum = P[index];

    for (int i = 0; i < N - 1; i++)
    {
        if (P[i] > P[i + 1])
        {
            is_sorted = false;
            break;
        }
    }

    if (is_sorted) return 1;

    while (index < N && sum <= M)
    {
        for (int i = 0; i < index  + 1; i++)
        {
            if (P[i] > P[i + 1])
            {
                int temp = P[i];
                P[i] = P[i + 1];
                P[i + 1] = temp;
            }
        }

        index++;
        sum += P[index];
    }

    for (int i = 0; i < N - 1; i++) if (P[i] > P[i + 1]) return 0;

    return 1;
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int P[N];
    for (int i = 0; i < N; i++) scanf("%d", &P[i]);

    int answer = solution(N, M, P);
    printf("%d\n", answer);

    return 0;
}
