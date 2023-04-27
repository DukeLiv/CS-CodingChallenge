#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int cutoffScore, int scoresLength, int scores[])
{
    // Write solution here
    return 0;
}

int main()
{
    int cutoffScore;
    cin >> cutoffScore;

    int scoresLength;
    cin >> scoresLength;

    vector<int> input_data;
    string buffer;
    int data;
    getline(cin, buffer);
    getline(cin, buffer);
    istringstream iss(buffer);
    while (iss >> data)
    {
        input_data.push_back(data);
    }

    int scores[scoresLength];
    for (int i = 0; i < scoresLength; i++)
    {
        scores[i] = input_data[i];
    }

    int answer = solution(cutoffScore, scoresLength, scores);
    cout << answer << endl;

    return 0;
}
