import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
//5622
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		char[] ch = bfr.readLine().toCharArray(); // 문자 배열
		int time = 0;
		for(int i=0;i<ch.length;i++) {
			int Cnum = ch[i];
			if(Cnum >=80 && Cnum<84) {
				time+= 8;
			}else if(Cnum>=84 && Cnum<87) {
				time+= 9;
			}else if(Cnum>=87 && Cnum<91) {
				time += 10;
			}else {
				Cnum -=56;
				time += Cnum/3;
			}
				 
		}
		System.out.println(time);
		
	}
}
