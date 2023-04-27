#include <stdio.h>

void solution(int n, char employees[][101], int shifts[][2])
{
    // Write solution here
}

int main()
{
    int n;
    scanf("%d", &n);

    char employees[n][101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", employees[i]);
    }

    int shifts[n][2];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &shifts[i][0], &shifts[i][1]);
    }

    solution(n, employees, shifts);

    return 0;
}
