import java.util.Scanner;
public class Dothis {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt()+sc.nextInt()+sc.nextInt()+sc.nextInt();
		int b = sc.nextInt()+sc.nextInt()+sc.nextInt()+sc.nextInt();
		int c = sc.nextInt()+sc.nextInt()+sc.nextInt()+sc.nextInt();
		int d = sc.nextInt()+sc.nextInt()+sc.nextInt()+sc.nextInt();
		
	if(a == b && b==c && c== d) {
		System.out.println("magic");
	}
	else {
	   System.out.println("not magic");
	}
}
}
