package baekjoon;

import java.io.BufferedReader;
import java.io.InputStreamReader;

// ���� �˰��� 2292�� �ҽ��ڵ�
public class BeeHouse {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		int k = 0, i = 1;
		while (true) {
			k += i;
			if( N == 1 ) 
			{
				System.out.println(1);
				break;
			}
			if (N <= (6 * k + 1)) {
				System.out.println(i+1);
				break;
			}
			i++;
		}
		br.close();
	}
}
