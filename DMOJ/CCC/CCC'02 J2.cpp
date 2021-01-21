import java.io.*;
import java.util.*;
public class Main{
    public static void main(String[]args) throws IOException{
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        char[] vow = {'a','e','y','u','i','o'};
        String s = in.readLine();
        while(!s.equals("quit!")){
            if(s.length()>4){
                if(!s.substring(s.length()-2,s.length()).equals("or")){
                    System.out.println(s);
                } else {
                    boolean print = false;
                    for(int i = 0; i < vow.length; i++){
                        char b = vow[i];
                        if(b==s.charAt(s.length()-3)){
                            System.out.println(s); 
                            print = true;
                            break;
                        }
                    }
                    if(print==false){
                        System.out.println(s.substring(0,s.length()-2)+"our");
                    }
                }
                
            } else {
                System.out.println(s);
            }
            s = in.readLine();
        }

    }
}
