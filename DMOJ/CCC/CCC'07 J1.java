import java.util.*;
public class yeeet {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
	int a = sc.nextInt();
	int b = sc.nextInt();
    int c= sc.nextInt();
	
if (a<b && b<c || a>b && b>c) {
	System.out.println(b);
}
if(b<a && a<c || b>a && a>c) {
	System.out.println(a);
	
}
if(a<c && c<b || a>c && c>b) {
	System.out.println(c);
}
}
}
