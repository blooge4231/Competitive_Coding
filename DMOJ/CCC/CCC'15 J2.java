import java.io.*;
import java.util.*;
public class Main{
    public static void main(String[]args) throws IOException{
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String a = in.readLine();
        int h = 0, s = 0;
        for(int i = 0; i+3<a.length(); i++){
            String str = a.substring(i,i+3);
            if(str.equals(":-)")){
                h++;
            } else if (str.equals(":-(")){
                s++;
            }
        }
        if(h==0&&s==0) System.out.println("none");
        else if(h>s) System.out.println("happy");
        else if(h<s) System.out.println("sad");
        else if(h==s) System.out.println("unsure");
    }
}
