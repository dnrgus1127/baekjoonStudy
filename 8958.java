import java.util.*;
import java.io.*;
 // ���� 8958
 // OXXOXOOXOXOOXO ������ O���Ë����� ����� 1���� x�� 0 ���� O�� ���������� ������ ���� ���� ����
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