package baekjoon;

import java.util.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class B1011 {
	public static void main(String args[]) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(bfr.readLine());
		StringTokenizer strToken;
		int[] x = new int[n];
		int[] y = new int[n];
		for (int i = 0; i < n; i++) {
			strToken = new StringTokenizer(bfr.readLine()," ");
			x[i] = Integer.parseInt(strToken.nextToken());
			y[i] = Integer.parseInt(strToken.nextToken());
		}
		for (int i = 0; i < n; i++) {
			int total = y[i] - x[i];
			int speed = 1, meter = total - 1, count = 1;

			while (meter != 0) {
				if (meter - speed - 1 >= ((speed + 1) * speed) / 2) {
					speed++;
					count++;
					meter -= speed;
				} else if (meter - speed >= speed * (speed - 1) / 2) {
					count++;
					meter -= speed;
				} else {
					speed--;
					count++;
					meter -= speed;
				}

			}
			System.out.println(count);
		}
	}
}
/*	public static int getCount(int x, int y) {
		int total = y - x;
		int speed = 1, meter = total - 1, count = 1;

		while (meter != 0) {
			if (meter - speed - 1 >= ((speed + 1) * speed) / 2) {
				speed++;
				count++;
				meter -= speed;
			} else if (meter - speed >= speed * (speed - 1) / 2) {
				count++;
				meter -= speed;
			} else {
				speed--;
				count++;
				meter -= speed;
			}

		}
		return count;

	}
}*/