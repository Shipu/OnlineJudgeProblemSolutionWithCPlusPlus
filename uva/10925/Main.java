package mypkg;

import java.math.BigInteger;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
            int n=in.nextInt();
           int  f= in.nextInt();
            int no=0,i;
            while(n != 0 || f != 0 )
            {
            BigInteger sum= BigInteger.ZERO;
            for(i=0;i<n;i++)
            {
                BigInteger frnd= in.nextBigInteger();
                sum=sum.add(frnd);
            }
            ++no;
         System.out.println("Bill #"+no+" costs "+sum+": each friend should pay "+sum.divide(BigInteger.valueOf(f))+"\n");
          n=in.nextInt();
          f=in.nextInt();
        }
    }
}
