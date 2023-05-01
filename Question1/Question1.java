import java.io.*;

class Solution {
    public static String solution(long n) {
        int even = 0;
        int odd = 0;

        for (int i = 1; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
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

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        long n = Long.parseLong(br.readLine());

        String answer = solution(n);
        System.out.println(answer);
    }
}
