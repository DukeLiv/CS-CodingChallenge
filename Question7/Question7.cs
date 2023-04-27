using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

class Solution {
    static bool solution(int n, int l, List<List<int>> transfers)
    {
        // Write solution here
        return false;
    }

    public static void Main(string[] args)
    {
        int[] firstLine = Array.ConvertAll(Console.ReadLine().Split(' '), containerTemp => Convert.ToInt32(containerTemp));

        int n = Convert.ToInt32(firstLine[0]);
        int l = firstLine[1];

        List<List<int>> transfers = new List<List<int>>();
        for (int i = 0; i < l; i++)
        {
            List<int> current = Array.ConvertAll(Console.ReadLine().Split(' '), containerTemp => Convert.ToInt32(containerTemp)).ToList();
            transfers.Add(current);
        }

        bool answer = solution(n, l, transfers);
        Console.WriteLine(answer ? "Ineligible" : "Eligible");
    }
}
