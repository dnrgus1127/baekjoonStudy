import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int TestCase = Integer.parseInt(bfr.readLine());
		int[] NumFiled = new int[TestCase];
		int[] prime = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };
		boolean[] visitFiled = new boolean[TestCase];
		int primeNum = 0;
		StringTokenizer strToken = new StringTokenizer(bfr.readLine(), " ");
		for (int i = 0; i < TestCase; i++) {
			NumFiled[i] = Integer.parseInt(strToken.nextToken());
		}
		for (int i = 0; i < TestCase; i++) {
			for (int j = 0; j < 11; j++) {
				if (NumFiled[i] != prime[j] && (NumFiled[i] % prime[j]) == 0) {
					visitFiled[i] = true;
				}
				if(NumFiled[i] == 1) {
					visitFiled[i] = true;
				}
			}
			
		}
		for (int i = 0; i < TestCase; i++) {
			if (visitFiled[i] == false) {
				primeNum += 1;
			}
		}
		System.out.println(primeNum);
	}

}