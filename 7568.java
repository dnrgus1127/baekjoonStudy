import java.io.*;
import java.util.*;

public class Main {
//2231
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(bfr.readLine());
		StringTokenizer stn;
		int[] x = new int[N];
		int[] y = new int[N];
		int[] Rank = new int[N];
		for(int i=0;i<N;i++) {
			stn = new StringTokenizer(bfr.readLine()," ");
			x[i] = Integer.parseInt(stn.nextToken());
			y[i] = Integer.parseInt(stn.nextToken());
		}
		for(int i =0;i<N;i++) {
			for(int j = 0;j<N;j++) {
				if(x[i]<x[j] && y[i]<y[j]) {
					Rank[i] += 1;
				}
			}
			System.out.print((Rank[i]+1)+" ");
		}
		
		

	}
}
