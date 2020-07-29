import java.io.*;
import java.util.*;

public class Main {
//2231
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(bfr.readLine());
		int low = 0;
		for (int i = N - 55; i < N ; i++) {
			int rest = i;
			int sum = i;
			while(rest != 0) {
				sum+= rest%10;
				rest /= 10;
			}

			if (sum == N) {
				low = i;
				break;
			}
		}
		System.out.println(low);
	}
}
