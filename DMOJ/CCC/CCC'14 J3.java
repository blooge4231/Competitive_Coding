import java.util.Scanner;
public class Double {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int A = 100;
		int D = 100;
		int rounds = sc.nextInt();

		
		for(int i = 0; i < rounds; i++) {
			int R = sc.nextInt();
			int L = sc.nextInt();
			if(R>L) {
				D = D-R;
			}
			else if(R<L) {
				A = A-L;
			}
			else if (R == L) {
				A = A;
				D = D;
				
			}
		}		
		System.out.println(A);
		System.out.println(D);		
}
}
