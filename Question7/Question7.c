#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool solution(int n, int l, int transfers[][2])
{
    // Write solution here
    return false;
}

int main()
{
    int n, l;
    scanf("%d %d", &n, &l);

    int transfers[l][2];
    for (int i = 0; i < l; i++)
    {
        scanf("%d %d", &transfers[i][0], &transfers[i][1]);
    }

    bool answer = solution(n, l, transfers);
    printf("%s", answer ? "Ineligible" : "Eligible");

    return 0;
}
