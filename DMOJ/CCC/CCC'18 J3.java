import java.util.*;
public class mre {
	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	
	int []arr = new int[5];
	
	arr [0] = 0;
	arr [1] = 0 + sc.nextInt();
	arr [2] = arr[1] + sc.nextInt();
	arr [3] = arr[2] + sc.nextInt();
	arr [4] = arr[3] + sc.nextInt();
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			int out = Math.abs(arr[i]-arr[j]);
			System.out.print(out + " ");
		}
		System.out.println();
	}
    }
}
