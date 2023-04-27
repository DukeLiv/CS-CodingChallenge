using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

public class Solution
{
    public static string solution(int n, List<int> flows)
    {
        // Write solution here
        return "";
    }

    public static void Main()
    {
        int n = Convert.ToInt32(Console.ReadLine());

        var flows = new List<int>();
        string input = Console.ReadLine();
        string pattern = " ";
        String[] substrings = Regex.Split(input, pattern);
        foreach (string s in substrings)
        {
            flows.Add(Convert.ToInt32(s));
        }

        string answer = solution(n, flows);
        Console.WriteLine(answer);
    }
}
