package mypkg;
import java.util.Scanner;
import java.math.BigInteger;
class Main
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        while(in.hasNext())
        {
             BigInteger f=BigInteger.ONE;
             BigInteger s=BigInteger.ZERO;
            int n=in.nextInt();
            for(int i=1;i<=n;i++)
            {
                f=f.multiply(BigInteger.valueOf(i));
            }
            while(f.compareTo(BigInteger.ZERO)==1)
            {
                s=s.add(f.mod(BigInteger.TEN));
                f=f.divide(BigInteger.TEN);
            }
            System.out.println(f);
        }
    }

}
