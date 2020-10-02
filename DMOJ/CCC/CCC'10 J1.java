import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
		int number = sc.nextInt();
		int answers = 0;
		if(number==1||number==9||number==10) {
			answers=1;
		}
		else if(number==2||number==8||number==3||number ==7) {
			answers = 2;
		}
		else {
			answers = 3;
		}
		System.out.println(answers);
	}
}
