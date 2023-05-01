#include <cmath>
#include <iostream>

using namespace std;

string solution(long long n)
{
    int even = 0;
    int odd = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0) even++;
            else odd++;

            if ((n / i) % 2 == 0) even++;
            else if (n / i != i) odd++;
        }
    }

    if (even > odd) return "BUY";
    else if (even < odd) return "SELL";
    else return "PASS";
}

int main()
{
    long long n;
    cin >> n;

    string answer = solution(n);
    cout << answer << endl;

    return 0;
}
