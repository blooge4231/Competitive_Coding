import java.util.*;
public class parking {
	public static void main(String[] args) {
		// TODO Auto-generated method stu
	Scanner sc = new Scanner(System.in);
	
	int n = sc.nextInt();
	
	String s = sc.next();
	sc.nextLine();
	String s1 = sc.next();
	
	int count = 0;
	
	for(int i = 0; i<n; i++) {
		if(s.charAt(i)=='C'&& s1.charAt(i)=='C') {
			count++;
		}
	}
	
	System.out.println(count);
	
}
}

