import java.io.*;
import java.util.*;

public class Main {
//14681
	public static void main(String[] args) throws Exception {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in));
		int x = Integer.parseInt(bfr.readLine());
		int y = Integer.parseInt(bfr.readLine());

		int output;

		if (x > 0 && y > 0) {
			output = 1;
			System.out.println(output);
		} else if (x < 0 && y > 0) {
			output = 2;
			System.out.println(output);
		} else if (x<0 && y<0) {
			output =3;
			System.out.println(output);
		} else
		{
			output =4;
			System.out.println(output);
		}

	}
}
