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
            if(n==0)
             break;
            int a=0,b=0,c=0,d=0,e=0,k=0,g=0,h=0,p=0,j=0;
            for(int i=1;i<=n;i++)
            {
                f=f.multiply(BigInteger.valueOf(i));
            }
            while(f.compareTo(BigInteger.ZERO)==1)
            {
                s=f.mod(BigInteger.TEN);
                if(s.compareTo(BigInteger.ZERO)==0)
                    a++;
                else if(s.compareTo(BigInteger.ONE)==0)
                    b++;
                else if(s.compareTo(BigInteger.valueOf(2))==0)
                    c++;
                  else if(s.compareTo(BigInteger.valueOf(3))==0)
                    d++;
                  else if(s.compareTo(BigInteger.valueOf(4))==0)
                    e++;
                  else if(s.compareTo(BigInteger.valueOf(5))==0)
                    k++;
                  else if(s.compareTo(BigInteger.valueOf(6))==0)
                    g++;
                  else if(s.compareTo(BigInteger.valueOf(7))==0)
                    h++;
                  else if(s.compareTo(BigInteger.valueOf(8))==0)
                    p++;
                  else if(s.compareTo(BigInteger.valueOf(9))==0)
                    j++;
                f=f.divide(BigInteger.TEN);

            }
System.out.println(n+"! --");
System.out.println("    (0)    "+a+"    (1)    "+b+"    (2)    "+c+"    (3)    "+d+"    (4)    "+e);
System.out.println("    (5)    "+k+"    (6)    "+g+"    (7)    "+h+"    (8)    "+p+"    (9)    "+j);

        }
    }

}
