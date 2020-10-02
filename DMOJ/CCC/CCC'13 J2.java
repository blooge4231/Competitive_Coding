import java.util.*;
public class Smething {
	public static void main(String[]args) {
		Scanner sc = new Scanner(System.in);
		String[] nice = {"I","O","S","H","Z","X","N"};
		String word = sc.nextLine();
		int counter = 0;
		for(int i = 1; i<=word.length();i++) {
		 String x = word.substring(i-1,i);
		 for(String y: nice) {
			 if(!x.equals(y)) {
				counter++;
			 } else if(x.equals(y)) {
				 counter = 0;
				 break;
			 }
		 }
		 if(counter>0) {
			 break;
		 }
		}
		if(counter > 0) {
			System.out.println("NO");
		} else if(counter ==0) {
			System.out.println("YES");
		}
	}
	
}
