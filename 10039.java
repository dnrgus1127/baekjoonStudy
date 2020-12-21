import java.io.*;
import java.util.*;

public class Main {
//10039
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int sum = 0;
		for (int i = 0; i < 5; i++) {
			int score = Integer.parseInt(bfr.readLine());
			if (score < 40) {
				sum += 40;
			} else {
				sum += score;
			}
		}
		System.out.println(sum/5);

	}
}
