#include <iostream>

using namespace std;

int solution(vector<string> &P, int L)
{
    // Write solution here
    return 0;
}

int main()
{
    int L;
    cin >> L;

    vector<string> P(L, "");
    for (int i = 0; i < L; i++)
    {
        cin >> P[i];
    }

    int answer = solution(P, L);
    cout << answer << endl;

    return 0;
}
