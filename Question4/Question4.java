import java.io.*;
import java.util.*;

class Solution {
    static void solution(int n, List<String> employees, List<List<Integer>> shifts) {
        // Write solution here
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        List<String> employees = new ArrayList<String>();
        for (int i = 0; i < n; i++) {
            employees.add(br.readLine());
        }

        List<List<Integer>> shifts = new ArrayList<List<Integer>>();
        for (int i = 0; i < n; i++) {
            List<Integer> currentShift = new ArrayList<Integer>(2);
            currentShift.add(Integer.parseInt(br.readLine()));
            currentShift.add(Integer.parseInt(br.readLine()));
            shifts.add(currentShift);
        }

        solution(n, employees, shifts);
    }
}
