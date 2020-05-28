package baekjoon;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

// 백준 알고리즘 2839번 소스코드
public class SugarDelivery {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		int count = 0, mod = 0;

		if (N == 4 || N == 7) {
			System.out.println(-1);
		} else {
			count += N / 5;
			mod += N % 5;
			while (true) {
				if (mod % 3 == 0) {
					count += mod / 3;
					System.out.println(count);
					break;
				} else {
					mod += 5;
					count--;
				}
			}

		}

	}
}
