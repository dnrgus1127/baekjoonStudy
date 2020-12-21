import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
//import java.util.Arrays;
import java.util.Collections;

public class Main {
//2751
	static int ArrLength;

	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int TestCase = Integer.parseInt(bfr.readLine());
		ArrayList<Integer> Arr = new ArrayList<Integer>();
		for (int i = 0; i < TestCase; i++) {
			Arr.add(Integer.parseInt(bfr.readLine()));
		}
		Collections.sort(Arr);
		//ArrLength = TestCase;
		//Sort(Arr , ArrLength);
		
		/*for (int i = ArrLength-1; i > 0; i--) {
			int temp = Arr[0];
			Arr[0] = Arr[i];
			Arr[i] = temp;
			Sort(Arr,i);
			
				
		}*/
		for (int i = 0; i < TestCase; i++) {
			System.out.println(Arr.get(i));
		}
		
	}

/*	public static void Sort(int[] Arr, int num) {
		for (int i = 1; i < num; i++) {
			int child = i; // 시작 위지 (자식 노드)
			while (child > 0) {
				int parent = (child - 1) / 2; // 비교할 자식 노드의 부모 노드
				if (Arr[parent] < Arr[child]) { // 부모 노드보다 자식 노드가 더 크면
					int temp = Arr[parent];
					Arr[parent] = Arr[child];
					Arr[child] = temp;
				}
				child = parent;
				
		}
		}
	}
	*/

}
