import java.io.*;

class Solution {
    static int solution(String files) {
        int[] freq = new int[128];

        for (char c : files.toCharArray()) freq[c]++;

        int palindrome_length = 0;
        boolean has_odd = false;

        for (int i : freq) {
            if (i % 2 == 0) palindrome_length += i;
            else {
                palindrome_length += i - 1;
                has_odd = true;
            }
        }

        if (has_odd) palindrome_length++;
        return palindrome_length;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String str = br.readLine();

        int answer = solution(str);
        System.out.println(answer);
    }
}
