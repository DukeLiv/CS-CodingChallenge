using System;
using System.Collections.Generic;

namespace Solution
{
    class Solution
    {
        static int solution(String files)
        {
            var freq = new Dictionary<char, int>();
            int len = files.Length;

            for (int i = 0; i < len; i++)
            {
                char c = files[i];

                if (freq.ContainsKey(c)) freq[c]++;
                else freq.Add(c, 1);
            }

            int palindrome_length = 0;
            int odd_count = 0;

            foreach (KeyValuePair<char, int> kvp in freq)
            {
                if (kvp.Value % 2 == 0) palindrome_length += kvp.Value;
                else
                {
                    palindrome_length += kvp.Value - 1;
                    odd_count++;
                }
            }

            if (odd_count > 0) palindrome_length++;

            return palindrome_length;
        }

        static void Main(string[] args)
        {
            String files = Console.ReadLine()!;

            int answer = solution(files);
            Console.WriteLine(answer);
        }
    }
}
