using System;

namespace Solution
{
    class Solution
    {
        static int solution(int N, int M, int[] P)
        {
            bool is_sorted = true;
            int index = 0;
            int sum = P[index];

            for (int i = 0; i < N - 1; i++)
            {
                if (P[i] > P[i + 1])
                {
                    is_sorted = false;
                    break;
                }
            }

            if (is_sorted) return 1;

            while (index < N && sum <= M)
            {
                for (int i = 0; i < index + 1; i++)
                {
                    if (P[i] > P[i + 1])
                    {
                        int temp = P[i];
                        P[i] = P[i + 1];
                        P[i + 1] = temp;
                    }
                }

                index++;
                sum += P[index];
            }

            for (int i = 0; i < N - 1; i++) if (P[i] > P[i + 1]) return 0;

            return 1;
        }

        static void Main(string[] args)
        {
            String[] firstLine = Console.ReadLine()!.Split(' ');
            String[] secondLine = Console.ReadLine()!.Split(' ');

            int N = int.Parse(firstLine[0]);
            int M = int.Parse(firstLine[1]);
            int[] P = Array.ConvertAll(secondLine, pTemp => int.Parse(pTemp));

            int answer = solution(N, M, P);
            Console.WriteLine(answer);
        }
    }
}
