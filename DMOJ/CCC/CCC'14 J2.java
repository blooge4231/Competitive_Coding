import java.util.*;
public class eatme {
	public static void main(String[] args) {
		
	Scanner sc = new Scanner(System.in);
	int a = sc.nextInt();
			String b = sc.next();
			int A = 0;
			int B = 0;
			for(int i = 0; i< a; i++) {
				if(b.charAt(i)=='A') {
					A++ ;
				} if(b.charAt(i) == 'B') {
					B++;
				}
					
			}
		if (A>B) {
			System.out.println("A");
		}
		if(B>A) {
			System.out.println("B");
		}
		if(B==A) {
			System.out.println("Tie");
		}
}
}
