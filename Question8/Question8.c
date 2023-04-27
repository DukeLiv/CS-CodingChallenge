#include <stdio.h>

int solution(int n, int m, int costs[])
{
    // Write solution here
    return 0;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int costs[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &costs[i]);
    }

    int answer = solution(n, m, costs);
    printf("%d\n", answer);

    return 0;
}
