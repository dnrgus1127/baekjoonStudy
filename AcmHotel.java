package baekjoon;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

// 백준 알고리즘 10250번 소스코드
public class AcmHotel {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(br.readLine());
		String[] str = new String[T];
		for(int i=0; i<T;i++)
		{
			StringTokenizer strT = new StringTokenizer(br.readLine());	
			int y = Integer.parseInt(strT.nextToken());
			Integer.parseInt(strT.nextToken());
			int N = Integer.parseInt(strT.nextToken());
			int sum=0, count=0;
			if(N%y != 0)
			{
				sum = N%y;
				count = N/y + 1;
			}
			else
			{
				sum = y;
				count = N/y;
			}
			if(count<10)
			{
				str[i] = sum+"0"+count;
			}
			else
				str[i] = sum +"" + count;
			
		}
		for(int i=0;i<T;i++)
		{
			System.out.println(str[i]);
		}
		
	}
}
