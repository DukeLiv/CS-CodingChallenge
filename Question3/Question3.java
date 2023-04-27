import java.io.*;

class Solution {
    public static int soulution(int N, int M, int[] P) {
        // Write solution here
        return 0;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine().trim());
        int M = Integer.parseInt(br.readLine().trim());

        int P[] = new int[N];
        for (int i = 0; i < N; i++) {
            P[i] = Integer.parseInt(br.readLine().trim());
        }

        int answer = soulution(N, M, P);
        System.out.println(answer);
    }
}
