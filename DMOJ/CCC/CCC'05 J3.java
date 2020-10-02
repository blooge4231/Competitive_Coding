import java.util.*;
public class ReturningHome {
	public static void main(String[]args) {
		Scanner sc = new Scanner(System.in);
		String word = sc.nextLine();
		ArrayList <String> dir = new ArrayList<String>();
		while (!word.equals("SCHOOL")) {
			dir.add(word);
			word = sc.next();
		}
		dir = rev(dir);
		for(int b = 0; b<dir.size()-2;b+=2) {
			System.out.println("Turn " + dir.get(b)+ " onto "+ dir.get(b+1)+ " street." );
		}
		System.out.println ("Turn "+ dir.get(dir.size()-1) + " into your HOME.");
		
	}
	public static ArrayList<String> rev(ArrayList<String>dir) {

		ArrayList<String> haha = new ArrayList<String>();
		for(int i = dir.size()-1;i>-1;i--) {
			String next = dir.get(i);
			if(next.equals("R")) {
				next = "LEFT";
				
			} else if(next.equals("L")) {
				next = "RIGHT";
				
			}
			haha.add(next);
		}
		return haha;
		
	}
	
}
