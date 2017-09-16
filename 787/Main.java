import java.math.BigInteger;
import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);

		while(sc.hasNext()){
			int n=100000, i;
			int arr[] = new int[500];
			for(i=0; n!=-999999; i++){
				n=sc.nextInt();	

				if(n!=-999999) arr[i]=n;
			}
			i--;

			BigInteger max1D = new BigInteger("-999999");
			BigInteger memo[][] = new BigInteger[500][500];
			for(int j=0; j<i; j++){
				memo[j][j]=BigInteger.valueOf(arr[j]);
				max1D=max1D.max(memo[j][j]);
				for(int k=j+1; k<i; k++){
					memo[j][k]=memo[j][k-1].multiply(BigInteger.valueOf(arr[k]));
					
					max1D=max1D.max(memo[j][k]);
				}
			}

			System.out.println(max1D);
		}
	}
}
