import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main(String[] args) throws java.lang.Exception
    {
        
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(); 

        while (T-- > 0) {
            int N = sc.nextInt(); 
            int M = sc.nextInt(); 
            
            int[] donuts = new int[N];
            for (int i = 0; i < N; i++) {
                donuts[i] = sc.nextInt(); 
            }
            
            int[] requests = new int[M];
            for (int i = 0; i < M; i++) {
                requests[i] = sc.nextInt(); 
            }
            
            int sadCustomers = countSadCustomers(N, M, donuts, requests);
            System.out.println(sadCustomers);
        }
    }
    
    public static int countSadCustomers(int N, int M, int[] donuts, int[] requests) {
        int sadCount = 0;

        
        for (int request : requests) {
            if (donuts[request - 1] > 0) {
                donuts[request - 1]--; 
            } else {
                sadCount++; 
            }
        }

        return sadCount;
    }
}

