import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
//2675
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		String str = bfr.readLine();
		int[] CharNum = new int[26];
		str = str.toLowerCase();
		char[] alpha = str.toCharArray();
		for(int i=0;i<alpha.length;i++) {
			int C_Num = alpha[i] -97;
			CharNum[C_Num]++;
		}
		int Max=CharNum[0],Max_N=0;
		int Max_C=0;
		for(int i=1;i<26;i++) {
			if(Max<=CharNum[i]) {
				Max_N = Max;
				Max = CharNum[i];
				Max_C = i;
			}
		}
		if(Max == Max_N) {
			System.out.println("?");
		}
		else {
			System.out.println((char)(Max_C+65));
		}
	
	}
}
