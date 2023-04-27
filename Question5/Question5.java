import java.io.*;
import java.util.*;

class Solution {
    static int solution(int cutoffScore, int scoresLength, List<Integer> scores) {
        // Write solution here
        return 0;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int cutoffScore = Integer.parseInt(br.readLine());

        int scoresLength = Integer.parseInt(br.readLine());

        String str = br.readLine();
        String[] price_str = str.split(" ");

        List<Integer> scores = new ArrayList<Integer>();
        for (String s : price_str) {
            scores.add(Integer.parseInt(s));
        }

        int answer = solution(cutoffScore, scoresLength, scores);
        System.out.println(answer);
    }
}
