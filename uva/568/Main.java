
package mypkg;
import java.util.Scanner;
import java.math.BigInteger;
 class Main
{
    public static void main(String[] args)
    {
        Scanner x=new Scanner(System.in);
        while(x.hasNext())
        {
             BigInteger f=BigInteger.ONE;
        BigInteger last=BigInteger.ZERO;
            int n=x.nextInt();
            for(int i=1;i<=n;i++)
            {
                f=f.multiply(BigInteger.valueOf(i));
            }
            while(last.compareTo(BigInteger.ZERO)==0)
            {
                last=f.mod(BigInteger.TEN);
                f=f.divide(BigInteger.TEN);
               
            }
            if(n<10)
             System.out.println("    "+n+" -> "+last);
            else if(n<100)
             System.out.println("   "+n+" -> "+last);
            else if(n<1000)
             System.out.println("  "+n+" -> "+last);
            else if(n<10000)
             System.out.println(" "+n+" -> "+last);
            else
             System.out.println(n+" -> "+last);
        }
    }

}
