#include <iostream>
#include <vector>

using namespace std;

void solution(int n, vector<int> flows)
{
    // Write solution here
}

int main()
{
    int n;
    cin >> n;

    vector<int> flows;
    for (int i = 0; i < n; i++)
    {
        int flow;
        cin >> flow;
        flows.push_back(flow);
    }

    solution(n, flows);

    return 0;
}
