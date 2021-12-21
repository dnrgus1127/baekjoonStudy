import java.util.*;
import java.io.*;
 // 백준 8958
 // OXXOXOOXOXOOXO 나오면 O나올떄마다 결과값 1증가 x는 0 증가 O가 연속적으로 나오면 연속 점수 포함
public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int TestCase = Integer.parseInt(bfr.readLine());
		int[] Sum = new int[TestCase];
		int score = 0;
		for (int i = 0; i < TestCase; i++) {
			score =0;
			String str = bfr.readLine();
			char[] strC = new char[str.length()];
			for (int j = 0; j < str.length(); j++) {
				strC[j] = str.charAt(j);
			}
			for (int k = 0; k < str.length(); k++) {
				if (strC[k] == 'O') {
					score += 1;

				} else if (strC[k] == 'X') {
					score = 0;
				}
				Sum[i] += score;
			}
		}
		for(int i =0;i<TestCase;i++) {
			System.out.println(Sum[i]);
		}

	}

}