package pkg787;

import java.io.IOException;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    private static String line;
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
    ArrayList<BigInteger> a = new ArrayList<BigInteger>();
    BigInteger n;
    
    while (in.hasNext()) {
      
      n = in.nextBigInteger();
      if (n.compareTo(BigInteger.valueOf(-999999))==0)
      {
        BigInteger result = a.get(0);
        BigInteger pro;
        for (int i = 0; i < a.size(); i ++) {
          pro =BigInteger.ONE;
          for(int j=i;j < a.size();j++) {
            pro = pro.multiply(a.get(j));
            if (result.compareTo(pro) == -1) 
                result = pro;
 
          }
        }
        a.clear();
        System.out.println(result);
      }
      else
      {
          a.add(n);
      }
    }
    }
    
}
