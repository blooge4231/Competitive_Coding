import java.util.*;
public class SAL {
	public static void main(String[]args) {
		Scanner sc = new Scanner(System.in);
		int spot = 1;
		int moves = sc.nextInt();
		boolean win = false;
		while(win==false) {	
    	if(spot+moves>100){
		System.out.println("You are now on square "+ spot);
		moves = sc.nextInt();
		continue;
		} else {
		if(moves==0) {
			System.out.println("You Quit!");
			break;
		}
		spot+=moves;
		spot=check(spot);
		System.out.println("You are now on square "+ spot);
		
		if(spot==100){
			System.out.println("You Win!");
			break;
		}
		if(sc.hasNextInt()) {
			moves = sc.nextInt();
		}
		}
		}
		
		
	}
	
	public static int check(int spot) {
		int[] head = {54,90,99};
		int[] end = {19,48,77};
		int[] top = {34, 64, 86};
		int[] bottom = {9, 40, 67};
		for(int i = 0; i<3;i++) {
		if(spot==head[i]) {
			return end[i];
      } else if(spot==bottom[i]) {
		    return top[i];
	}
		}
		return spot;
	}
	
	
}
