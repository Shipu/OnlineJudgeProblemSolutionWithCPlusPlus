package mypkg;

import java.math.BigInteger;
import java.util.Scanner;
 class Main {
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		BigInteger a,b;
		String c;
		while (in.hasNext()) {
			a=in.nextBigInteger();
			c=in.next();
			b=in.nextBigInteger();
			if (c.compareTo("/")==0) {
                           System.out.println(a.divide(b));
			}
			else{
                           System.out.println(a.remainder(b));
			}

		}
	}

}
