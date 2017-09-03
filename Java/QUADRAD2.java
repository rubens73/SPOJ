import java.util.Scanner;

public class QUADRAD2 {
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner inputs = new Scanner(System.in);
		int number = 0;
		int square =0;
		
		number = inputs.nextInt();
		if(number<10000)
		{
			if(number<0){
				number = number*(-1);				
			}
			
			square = number*number;
			System.out.println(square);
		}
	}
}
