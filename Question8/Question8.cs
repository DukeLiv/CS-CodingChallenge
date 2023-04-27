using System;

namespace Solution
{
    class Solution
    {
        static int solution(int n, int m, int[] costs)
        {
            // Write solution here
            return 0;
        }

        static void Main(string[] args)
        {
            String[] firstLine = Console.ReadLine().Split(' ');
            String[] secondLine = Console.ReadLine().Split(' ');

            int n = int.Parse(firstLine[0]);
            int m = int.Parse(firstLine[1]);

            int[] costs = Array.ConvertAll(secondLine, sTemp => int.Parse(sTemp));

            int answer = solution(n, m, costs);
            Console.WriteLine(answer);
        }
    }
}
