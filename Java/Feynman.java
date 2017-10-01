import java.util.ArrayList;
import java.util.Scanner;

public class Feynman {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		ArrayList<Integer> matrixN = new ArrayList<Integer>();
		
		do{
			matrixN.add(input.nextInt());
		}while(matrixN.get(matrixN.size()-1) != 0);
		
		input.close();
		
		for (int i = 0; i<matrixN.size()-1;i++){
			sumFeyman(matrixN.get(i));
		}

	}
	
	public static void sumFeyman(int pNumber)
	{
		int sum = 0;
		int i;
		for(i=1;i<=pNumber;i++)
		{
			sum = sum + (i*i);
		}
		
		System.out.println(sum);
	}
}