using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

public class Solution
{
    public static int solution(int cutoffScore, int scoresLength, List<int> scores)
    {
        // Write solution here
        return 0;
    }

    public static void Main()
    {
        int cutoffScore = Convert.ToInt32(Console.ReadLine());

        int scoresLength = Convert.ToInt32(Console.ReadLine());

        var scores = new List<int>();
        string input = Console.ReadLine();
        string pattern = " ";
        String[] substrings = Regex.Split(input, pattern);
        foreach (string s in substrings)
        {
            scores.Add(Convert.ToInt32(s));
        }

        int answer = solution(cutoffScore, scoresLength, scores);
        Console.WriteLine(answer);
    }
}
