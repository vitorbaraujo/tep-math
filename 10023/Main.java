import java.math.BigInteger;
import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);

		int t=sc.nextInt();

		for(int y=0; y<t; y++){
			if(y>0)
				System.out.println();

			BigInteger n=sc.nextBigInteger();

			Double s=Math.sqrt(n.doubleValue());
			System.out.println(BigInteger.valueOf(s.longValue()));
		}
	}
}
