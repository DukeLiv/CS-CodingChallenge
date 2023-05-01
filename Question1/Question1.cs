using System;

public class Solution
{
    public static string solution(long n)
    {
        int even = 0;
        int odd = 0;

        for (int i = 1; i <= Math.Sqrt(n); i++)
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

    public static void Main()
    {
        var n = long.Parse(Console.ReadLine()!);

        var answer = solution(n);
        Console.WriteLine(answer);
    }
}
