#include <iostream>

using namespace std;

int solution(int n, int m, vector<int> costs)
{
    // Write solution here
    return 0;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> costs(m, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> costs[i];
    }

    int answer = solution(n, m, costs);
    cout << answer << endl;

    return 0;
}
