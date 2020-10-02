import java.util.Arrays;
import java.util.Scanner;

public class Aanag {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String a = sc.nextLine();
	    String b = sc.nextLine();
	    
	     a = a.replace(" ", "");
	     b = b.replace(" ", "");
	     
	     String[]one = a.split("");
	     String[]two = b.split("");
	     
	     Arrays.sort(one);
	     Arrays.sort(two);
	     
if(one.length != two.length) {
	System.out.println("Is not an anagram.");
	return;
}
for(int i = 0; i< one.length; i++) {
	if(!one[i].equals(two[i])) {
		System.out.print("Is not an anagram.");
		return;
	}
}
System.out.println("Is an anagram.");
    }
}
