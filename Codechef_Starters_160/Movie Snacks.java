import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
       
        Scanner sc = new Scanner(System.in);

        
        int X = sc.nextInt(); 
        int Y = sc.nextInt(); 
        int Z = sc.nextInt(); 

        
        int costWithoutCombo = 2 * X + 3 * Y;

        
        int costUsingCombos = 2 * Z + Y;
        
        
        int costAllCombos = 3 * Z;

        
        int minCost = Math.min(costWithoutCombo, Math.min(costUsingCombos, costAllCombos));

        
        System.out.println(minCost);

        
        sc.close();
    }
}
