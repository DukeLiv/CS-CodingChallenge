using System;

namespace Solution
{
    class Solution
    {
        static int solution(int N, int M, int[] P)
        {
            // Write solution here
            return 0;
        }

        static void Main(string[] args)
        {
            String[] firstLine = Console.ReadLine().Split(' ');
            String[] secondLine = Console.ReadLine().Split(' ');

            int N = int.Parse(firstLine[0]);
            int M = int.Parse(firstLine[1]);
            int[] P = Array.ConvertAll(secondLine, pTemp => int.Parse(pTemp));

            int answer = solution(N, M, P);
            Console.WriteLine(answer);
        }
    }
}
