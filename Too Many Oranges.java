import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();  
        
        while (T-- > 0) {
            int N = sc.nextInt(); 
            int K = sc.nextInt(); 
            
            boolean possible = false;
            
            
            for (int i = 0; i <= N && !possible; i++) {
                for (int j = 0; j <= N - i && !possible; j++) {
                    int k = N - i - j;
                    if (10 * i + 11 * j + 12 * k == K) {
                        possible = true;
                    }
                }
            }
            
            System.out.println(possible ? "YES" : "NO");
        }
    }
}

