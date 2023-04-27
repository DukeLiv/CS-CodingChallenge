using System;
using System.Collections.Generic;

public class Solution
{
    public static int solution(List<string> P, int L)
    {
        // Write solution here
        return 0;
    }

    public static void Main(string[] args)
    {
        var L = int.Parse(Console.ReadLine().Trim());

        var P = new List<string>();
        for (int i = 0; i < L; i++)
        {
            string str = Console.ReadLine();
            P.Add(str);
        }

        int answer = solution(P, L);
        Console.WriteLine(answer);
    }
}
