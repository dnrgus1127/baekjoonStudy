import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
//2750
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int TestCase = Integer.parseInt(bfr.readLine());
		int[] Arr = new int[TestCase];
		for(int i=0;i<TestCase;i++) {
			Arr[i] = Integer.parseInt(bfr.readLine());
		}
		sortArr(Arr);
		for(int i=0;i<TestCase;i++) {
			System.out.println(Arr[i]);
		}
		
		
	}
	public static void sortArr(int[] arr) {
		for(int i=1;i<arr.length;i++) {
			int Standard = arr[i]; // 기준값
			int aux = i-1; // 비교 대상
			
			while(aux>=0 && Standard < arr[aux]) { // 비교 대상의 위치가 배열의 범위를 벗어나지 않고, 전 값이 더 크면 
				arr[aux +1] = arr[aux];
				
				aux--;
			}
			arr[aux+1] = Standard;
			
			
		}
	}
}
