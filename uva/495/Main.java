import java.io.*;
import java.util.Scanner;
import java.util.ArrayList;
import java.math.BigInteger;

public class Main
{
    public static void main(String [] args0)
    {

        BigInteger [] fibs = new BigInteger [5001];
        Scanner in = new Scanner(System.in);
        fibs[0] = BigInteger.ZERO;
        fibs[1] = BigInteger.ONE;
        fibs[2] = BigInteger.ONE;
        for(int i = 3; i < 5001; i++)
        {
            fibs[i] = fibs[i-1].add(fibs[i-2]);
        }
        while( in.hasNextInt() ){
            int n = in.nextInt();
            System.out.println("The Fibonacci number for " + n + " is " + fibs[n] );
        }

    }


}
