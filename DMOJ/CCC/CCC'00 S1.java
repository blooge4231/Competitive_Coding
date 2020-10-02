import java.util.*;
public class Mans {
public static void main(String[]args) {
		Scanner sc = new Scanner(System.in);
		int Quarters = sc.nextInt();
		int One = sc.nextInt();
		int Two = sc.nextInt();
		int Three = sc.nextInt();
		int turns = 0;
		while (Quarters > 0) {	
			if(Quarters == 0) {
				break;
			} else {
		    turns++;
			Quarters--;
			One++;
			if(One == 35) {
				Quarters = Quarters + 30;
				One = 0;
			}
			else if(Quarters == 0) {
				break;
			}
			turns++;
			Quarters--;
			Two++;
			if(Two == 100) {
				Quarters = Quarters + 60;
				Two = 0;
			}
			else if(Quarters == 0) {
				break;
			}
			turns++;
			Quarters--;
			Three++;
			 if(Three == 10) { 	
				Quarters = Quarters + 9;
				Three = 0;
			}
			else if(Quarters == 0) {
				break;
			}
		}
		}
		System.out.println("Martha plays " + turns + " times before going broke." );
}
}
