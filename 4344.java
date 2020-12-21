import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int TestCase = Integer.parseInt(bfr.readLine());
		StringTokenizer strToken;
		float[] OutPut = new float[TestCase];
		for (int i = 0; i < TestCase; i++) {
			double avg = 0;
			double Sum = 0;
			double UpAvg = 0;
			strToken = new StringTokenizer(bfr.readLine(), " ");
			int Case = Integer.parseInt(strToken.nextToken());
			int[] studentScore = new int[Case];
			for (int k = 0; k < Case; k++) {
				studentScore[k] = Integer.parseInt(strToken.nextToken());
			}
			for (int k = 0; k < Case; k++) {
				Sum += studentScore[k];
			}
			avg = Sum / Case;
			for (int k = 0; k < Case; k++) {
				if (avg < studentScore[k]) {
						UpAvg += 1;
				}
			}
			double round = UpAvg/Case *100;
			OutPut[i] = (float) (Math.round(round*1000)/1000.0);
			
		}
		for(int i=0;i<TestCase;i++) {
			System.out.println(String.format("%.3f", OutPut[i])+"%");
		}
	}

}