import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
//1316
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int TestCase = Integer.parseInt(bfr.readLine());
		int isGroup = TestCase;
		String[] Case = new String[TestCase];
		for(int i =0;i<TestCase;i++) {
			Case[i] = bfr.readLine();
		}
		for(int i=0;i<TestCase;i++) {
			char[] ch = Case[i].toCharArray();
			boolean[] isCh = new boolean[26];
			for(int k=1;k<ch.length;k++) {
				if(ch[k-1] != ch[k]) {
					int num = ch[k];
					int num2 = ch[k-1];
					if(isCh[num-97] == true) {
						isGroup -=1;
						break;
					}else {
						isCh[num2-97] = true;
					}
					
				}
			}
		}
		System.out.println(isGroup);
	
	}
}
