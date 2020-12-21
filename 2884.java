import java.io.*;
import java.util.*;

public class Main {
//2884
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		String str = bfr.readLine();
		String[] time = str.split(" ");
		int H = Integer.parseInt(time[0]);
		int M = Integer.parseInt(time[1]);

		if(M>=45) {
			System.out.println(H+" "+(M-45));
		}else {
			M = 60-45+M;
			if(H == 1) {
				System.out.println((H-1)+" "+M);
			}
			else if (H == 0) {
				H = 23;
				System.out.println(H+" "+M);
			}
			else {
				H -= 1;
				System.out.println(H+" "+M);
			}
		}
		
	

	}
}
