#include <iostream>
#include <string>

using namespace std;

void solution(int n, vector<string> employees, vector<vector<int>> shifts)
{
    // Write solution here
}

int main()
{
    int n;
    cin >> n;

    vector<string> employees(n);
    string name;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        employees.push_back(name);
    }

    vector<vector<int>> shifts;
    vector<int> shift(2);
    for (int i = 0; i < n; i++)
    {
        cin >> shift[0] >> shift[1];
        shifts.push_back(shift);
    }

    solution(n, employees, shifts);

    return 0;
}
