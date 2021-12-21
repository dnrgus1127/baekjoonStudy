import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int M = Integer.parseInt(bfr.readLine());
		int N = Integer.parseInt(bfr.readLine());
		int[] arr = new int[N - M + 1];
		int k = M;
		boolean Min = false;
		int Mini = 0;
		int Sum = 0;
		for (int i = 0; i < N - M + 1; i++) {
			arr[i] = k++;
		}
		for (int i = 0; i < N - M + 1; i++) {
			for (int j = 2; j < arr[i] / 2 + 1; j++) {
				if (arr[i] == 0) {
					break;
				}
				if (arr[i] % j == 0) {
					arr[i] = 0;
				}
			}
			if (Min == false) {
				if (arr[i] != 0&& arr[i] != 1) {
					Mini = arr[i];
					Min = true;
				}
			}
			Sum += arr[i];

		}
		if (M == 1) {
			Sum -= 1;
		}
		if (Sum == 0) {
			System.out.println("-1");
		} else {
			System.out.println(Sum);
			System.out.println(Mini);
		}

	}

}