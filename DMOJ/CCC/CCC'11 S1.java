import java.io.*;
public class test{
    public static void main(String[] args) throws IOException{
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(in.readLine());
        int s = 0;
        int t = 0;
        for(int i = 0; i<n; i++){
            String y = in.readLine();
           
            for(int j = 0; j<y.length();j++){
                if(y.charAt(j)=='s'||y.charAt(j)=='S'){
                    s++;
                } else if (y.charAt(j) == 't'||y.charAt(j)=='T'){
                    t++;
                }
            }
         
        }
        if(s>=t){
            System.out.println("French");
        } else {
            System.out.println("English");
        }
    }
}
