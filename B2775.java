package baekjoon;

import java.util.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class B2775 {
	public static void main(String args[]) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(bfr.readLine());
		int [] TK = new int[n];
		int [] TN = new int[n];
		for(int i=0; i<n;i++)
		{
			TK[i] = Integer.parseInt(bfr.readLine());
			TN[i] = Integer.parseInt(bfr.readLine());
		}
		int[][] house = new int[15][14];
		for (int i = 0; i < 14; i++) {
			house[0][i] = i + 1;
			house[i+1][0] = 1;
		}
		for (int K = 1; K < 15; K++) {
			for (int N = 1; N < 14; N++) {
				house[K][N] = house[K-1][N] + house[K][N-1];
			}
		}
		for(int i=0;i<n;i++)
		{
			System.out.println(house[TK[i]][TN[i]-1]);
		}
		

	}
}