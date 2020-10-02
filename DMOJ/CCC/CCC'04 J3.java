import java.util.*;
public class Smilesssss {
public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		String [] adj = new String[x];
		int y = sc.nextInt();
		String [] noun = new String [y];
		
		for(int i= 0; i < x; i++) {
			adj[i] = sc.next();
		}
		for (int i = 0; i <y; i++) {
			noun[i] = sc.next();
		}
		for (int i =0; i < adj.length; i++) {
			for (int j = 0; j < noun.length; j++) {
				System.out.println(adj[i] + " as " + noun[j] );
			}
		}
}
}
