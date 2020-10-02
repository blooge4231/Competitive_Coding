import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
	int N = sc.nextInt();
    int right = 0;
	String [] student = new String [N];
	String [] teacher = new String [N];

	for(int i = 0; i < N; i++) {
		student[i] = sc.next();
	}
	for(int j = 0; j < N; j++) {
			teacher[j] = sc.next();	
	}
	for(int k = 0; k < N;k++) {
		if(student[k].equals(teacher[k])) {
			right++;
		}
	}
		System.out.println(right);
	
	
    }
}
