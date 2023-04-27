import java.io.*;
import java.util.*;

class Solution {
    static boolean solution(int n, int l, List<List<Integer>> transfers) {
        // Write solution here
        return false;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] firstLine = br.readLine().split(" ");
        int n = Integer.parseInt(firstLine[0]);
        int l = Integer.parseInt(firstLine[1]);

        List<List<Integer>> transfers = new ArrayList<>();
        for (int i = 0; i < l; i++) {
            List<Integer> transfer = new ArrayList<Integer>(2);
            transfer.add(Integer.parseInt(br.readLine()));
            transfer.add(Integer.parseInt(br.readLine()));
            transfers.add(transfer);
        }

        boolean answer = solution(n, l, transfers);
        System.out.println(answer ? "Ineligible" : "Eligible");
    }
}
