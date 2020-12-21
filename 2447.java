import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
public class Main {
//2447
	static char[][] starArr;

	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		int TestCase = Integer.parseInt(bfr.readLine());
		starArr = new char[TestCase][TestCase];
		for(int i=0;i<TestCase;i++) {
			Arrays.fill(starArr[i],' ');
		}
		int value = TestCase/3;
		makeStar(0,0,value);
		for(int i=0;i<TestCase;i++) {
			for(int j=0;j<TestCase;j++) {
				sb.append(starArr[i][j]);
			}
			sb.append("\n");
		}
		System.out.println(sb.toString());
		
	}
	public static void makeStar(int x, int y, int value) {
		for(int i=0;i<3;i++) {
			for(int j=0;j<3;j++) {
				if(i==1&&j==1) {
					if(value<3) {
						starArr[x+i][y+j] = ' ';
					}
				}else {
					if(value<3) {
						starArr[x+i][y+j] = '*';
					}else {
						makeStar(x+i*value,y+j*value,value/3);
					}
					
				}
			}
		}
	}

}
