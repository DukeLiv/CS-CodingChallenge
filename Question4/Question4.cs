using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

class Solution
{
    static void solution(int n, List<String> employees, List<List<int>> shifts)
    {
        // Write solution here
    }

    public static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());

        List<String> employees = Console.ReadLine().Split(' ').ToList();

        List<List<int>> shifts = new List<List<int>>();
        for (int i = 0; i < n; i++)
        {
            List<int> interval = Array.ConvertAll(Console.ReadLine().Split(' '), containerTemp => Convert.ToInt32(containerTemp)).ToList();
            shifts.Add(interval);
        }

        solution(n, employees, shifts);
    }
}
