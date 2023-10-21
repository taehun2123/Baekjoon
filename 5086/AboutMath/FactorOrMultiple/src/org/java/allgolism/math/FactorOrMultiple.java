package org.java.allgolism.math;

import java.io.*;
import java.util.StringTokenizer;

public class FactorOrMultiple {

	public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        while (true) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            if (a == 0 && b == 0) break;
            if (b % a == 0) { //a는 b의 약수이다.
                sb.append("factor\n");
            } else if (a % b == 0) { //a는 b의 배수이다.
                sb.append("multiple\n");
            } else {
                sb.append("neither\n");
            }
        }
        System.out.print(sb);
    }

}
