import java.io.*;
import java.util.*;

class Solution {
    static String solution(int n, ArrayList<Integer> flows) {
        // Write solution here
        return "";
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        String str = br.readLine();
        String[] numsStr = str.split(" ");
        ArrayList<Integer> flows = new ArrayList<Integer>();
        for (String numStr : numsStr) {
            flows.add(Integer.parseInt(numStr));
        }

        String answer = solution(n, flows);
        System.out.println(answer);
    }
}
