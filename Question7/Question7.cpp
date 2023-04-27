#include <iostream>
#include <string>

using namespace std;

bool solution(int n, int l, vector<vector<int>> transfers)
{
    // Write solution here
    return false;
}

int main()
{
    int n, l;
    cin >> n >> l;

    vector<vector<int>> transfers;
    vector<int> transfer(2);
    for (int i = 0; i < l; i++)
    {
        cin >> transfer[0] >> transfer[1];
        transfers.push_back(transfer);
    }

    bool answer = solution(n, l, transfers);
    answer ? cout << "Ineligible" : cout << "Eligible";

    return 0;
}
