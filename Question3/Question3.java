import java.io.*;

class Solution {
    public static int soulution(int N, int M, int[] P) {
        boolean is_sorted = true;
        int index = 0;
        int sum = P[index];

        for (int i = 0; i < N - 1; i++)  {
            if (P[i] > P[i + 1]) {
                is_sorted = false;
                break;
            }
        }

        if (is_sorted) return 1;

        while (index < N && sum <= M) {
            for (int i = 0; i < index + 1; i++) {
                if (P[i] > P[i + 1]) {
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

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] firstLine = br.readLine().split(" ");
        int N = Integer.parseInt(firstLine[0]);
        int M = Integer.parseInt(firstLine[1]);

        int P[] = new int[N];
        String[] secondLine = br.readLine().split(" ");
        for (int i = 0; i < N; i++) {
            P[i] = Integer.parseInt(secondLine[i]);
        }

        int answer = soulution(N, M, P);
        System.out.println(answer);
    }
}
