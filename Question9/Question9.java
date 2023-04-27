import java.io.*;
import java.util.*;

class Solution {
    public static int solution(List<String> P) {
        // Write solution here
        return 0;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        List<String> P = new ArrayList<String>();
    
        int L = Integer.parseInt(br.readLine());
        for (int i = 0; i < L; i++) {
            String str = br.readLine();
            P.add(str);
        }

        int answer = solution(P);
        System.out.println(answer);
    }
}
