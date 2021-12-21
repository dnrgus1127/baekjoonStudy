import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int TestCase = Integer.parseInt(bfr.readLine());
		StringTokenizer strToken;
		int[] result = new int[TestCase];
		for(int i=0;i<TestCase;i++) {
			strToken= new StringTokenizer(bfr.readLine()," ");
			int testOne; // 처리하는 컴퓨터의 번호
			int a = Integer.parseInt(strToken.nextToken());
			int b = Integer.parseInt(strToken.nextToken());
			testOne = 1;
			for(int j=0;j<b;j++)
			{
				testOne = (testOne*a)%10;
			}
			if(testOne == 0) {
				result[i] = 10;
			}
			else {
				result[i]= testOne;
			}
			
		}
		for(int i=0;i<TestCase;i++) {
			System.out.println(result[i]);
		}
	}
	
}