import java.io.*;

class Solution {
    static int solution(int n, int m, int[] costs) {
        // Write solution here
        return 0;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int m = Integer.parseInt(br.readLine());

        int[] costs = new int[m];
        for (int i = 0; i < m; i++) {
            costs[i] = Integer.parseInt(br.readLine());
        }

        int answer = solution(n, m, costs);
        System.out.println(answer);
    }
}
