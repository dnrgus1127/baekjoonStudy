import java.io.*;
import java.util.*;

public class Main {

	public static void 	main(String[] args) throws Exception {
		BufferedReader bfr=new BufferedReader(new InputStreamReader(System.in));;
		int N;
		Vector<Integer> isPrime = new Vector<Integer>();
		while (true) {
			String str = " ";
			str = bfr.readLine();
			
			N = Integer.parseInt(str);
			if(N == 0) {
				break;
			}
			int[] prime = new int[N];
			int primeIndex =0;
			for(int i = N+1 ;i<=2*N;i++) {
				prime[primeIndex] = i;
				primeIndex++;
			}
			for(int k=0;k<prime.length;k++) {
				int root = (int) Math.sqrt(prime[k]);
				for(int j =2 ; j <=root;j++) {
					if(prime[k] == 0 ) {
						break;
					}
					if(prime[k] %j == 0 && prime[k] != j) {
						int y = k;
						while(y<prime.length) {
							prime[y] = 0;
							y+=j;
						}
					}
					
				}
			}
			int sum =0;
			for(int i = 0; i<prime.length;i++) {
				if(prime[i] != 0) {
					sum+=1;
				}
			}
			isPrime.add(sum);
		}
		for(int q=0;q<isPrime.size();q++) {
			System.out.println(isPrime.get(q));
		}
		
	}

}
