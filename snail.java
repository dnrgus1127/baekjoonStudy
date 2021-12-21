package baekjoon;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

// 백준 알고리즘 2869번 소스코드
public class snail {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String N = br.readLine();
		StringTokenizer strT = new StringTokenizer(N);
		int a, b, v , sub;
		a = Integer.parseInt(strT.nextToken());
		b = Integer.parseInt(strT.nextToken());
		v = Integer.parseInt(strT.nextToken());
		int day = 0, X = 0;
		sub = a-b;
		X = v - a;
		if(X % sub ==0)
			day = X/sub +1;
		else
			day = X/sub +2;
		System.out.println(day);
		br.close();
	}
}
