import java.math.BigInteger;
import java.util.Scanner;

public class Main{

	public static BigInteger bb(BigInteger left, BigInteger right, BigInteger goal){
		BigInteger mid=(left.add(right)).divide(new BigInteger("2"));
		BigInteger m=mid.multiply(mid);

		if(m.compareTo(goal)==0)
			return mid;
		if(m.compareTo(goal)<0)
			return bb(mid, right, goal);
		else
			return bb(left, mid, goal);
	}

	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);

		int t=sc.nextInt();

		for(int y=0; y<t; y++){
			if(y>0)
				System.out.println();
	
			BigInteger n=sc.nextBigInteger();

			BigInteger a=bb(BigInteger.ZERO, n, n);

			System.out.println(a);
		}
	}
}
