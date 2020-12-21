import java.io.*;
import java.util.*;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		String first = bfr.readLine();
		StringTokenizer stn = new StringTokenizer(first, " ");
		int N = Integer.parseInt(stn.nextToken());
		int M = Integer.parseInt(stn.nextToken());
		String input = bfr.readLine();
		stn = new StringTokenizer(input, " ");
		int[] num = new int[N];
		for (int i = 0; i < N; i++) {
			num[i] = Integer.parseInt(stn.nextToken());
		}
		int NumberOfCase = N*(N-1)*(N-2);
		
		int[] sum = new int[NumberOfCase];
		int index = 0;
		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N; j++) {
				for (int k = j + 1; k < N; k++) {
					sum[index] = num[i] + num[j] + num[k];
					index++;

				}
			}
		}
		int near=M+1;
		int t;
		int nearIndex =0;
		for (int i = 0; i < NumberOfCase; i++) {
			if(M-sum[i]>=0 && near>M-sum[i]) {
				nearIndex =i;
				near = M - sum[i];
			}
			
		}
		System.out.println(sum[nearIndex]);
	}
}
