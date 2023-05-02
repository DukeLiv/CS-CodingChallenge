#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int solution(string files)
{
    unordered_map<char, int> freq;
    int len = files.length();

    for (int i = 0; i < len; i++)
    {
        char c = files[i];

        freq[c]++;
    }

    int palindrome_length = 0;
    int odd_count = 0;

    for (auto i = freq.begin(); i != freq.end(); ++i)
    {
        if (i->second % 2 == 0) palindrome_length += i->second;
        else
        {
            palindrome_length += i->second - 1;
            odd_count++;
        }
    }

    if (odd_count > 0) palindrome_length++;

    return palindrome_length;
}

int main()
{
    string files = "";
    cin >> files;

    int answer = solution(files);
    cout << answer << endl;

    return 0;
}
