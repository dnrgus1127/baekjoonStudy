import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
//2675
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		StringBuffer sb = new StringBuffer();
		int Test = Integer.parseInt(bfr.readLine());
		for(int i=0;i<Test;i++) {
			String str = bfr.readLine();
			String[] NumAlpha = str.split(" ");
			int R = Integer.parseInt(NumAlpha[0]); // ¹Ýº¹ È½¼ö
			String[] Alpha = NumAlpha[1].split("");
			for(int j=0;j<Alpha.length;j++) {
				for(int k=0;k<R;k++) {
					sb.append(Alpha[j]);
				}
			}
			sb.append("\n");
		}
		System.out.println(sb);
	}
}
