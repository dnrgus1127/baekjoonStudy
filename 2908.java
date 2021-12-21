import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
//2908
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		String[] str = bfr.readLine().split(" ");
		String[] f_Num = str[0].split("");
		String[] s_Num = str[1].split("");
		StringBuffer sb = new StringBuffer();
		StringBuffer sb2 = new StringBuffer();
		for(int i=2;i>=0;i--) {
			sb.append(f_Num[i]);
			sb2.append(s_Num[i]);
		}
		int first = Integer.parseInt(sb.toString());
		int seconed = Integer.parseInt(sb2.toString());
		
		if(first>seconed) {
			System.out.println(first);
		}else {
			System.out.println(seconed);
		}
	}
}
