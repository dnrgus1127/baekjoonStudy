package baekjoon;

import java.io.*;
import java.util.*;

public class RGB {

		public static void main(String[] args) throws IOException {
			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			String str = br.readLine();
			StringTokenizer strToken = new StringTokenizer(str);
			int A,B,C;
			A = Integer.parseInt(strToken.nextToken());
			B = Integer.parseInt(strToken.nextToken());
			C = Integer.parseInt(strToken.nextToken());
			int i=1;
			if(C<=B)
			{
				System.out.println(-1);
			}
			else
			{
				while(A>=i*(C-B))
				{
					i++;
				}
				System.out.println(i);
			}
			
			}


	}
