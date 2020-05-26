package java9Week;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	static int d[] = new int[100]; 
	public static void main(String[] args) throws Exception {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(br.readLine());
		int[] j = new int[T];
		for(int i =0; i<T; i++)
		{
			j[i] = Integer.parseInt(br.readLine());
		}
		for(int i=0; i<T;i++) {
			
			zeroOne(j[i]);
		}	

		
		
	}
	public static void zeroOne(int N) {
		if(N == 0)
		{
			System.out.println("1 0");
		}
		else if(N == 1)
		{
			System.out.println("0 1");
		}
		else
		{
			System.out.println(fibonacci(N-1)+" "+fibonacci(N));
		}
	}
	public static int fibonacci (int n) {
		if(n == 0) {
			return 0;
		} 
		else if( n== 1) 
		{
			return 1;
		}
		else if(d[n] != 0)
		{
			return d[n];
		}
		else {
			return d[n] = fibonacci(n-1) + fibonacci(n-2);
		}
	}
	
}
