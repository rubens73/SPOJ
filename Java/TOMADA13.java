import java.util.Scanner;

public class TOMADA13 {

	public static void main(String[] args) {
		
		Scanner inputs = new Scanner(System.in);
		int electrical_outlets=0;
		int total =0;
		
		for(int i=0;i<4;i++)
		{
			electrical_outlets = inputs.nextInt();
			if(electrical_outlets>=2 && electrical_outlets<=6)
			{
				total = total + electrical_outlets;
			}else{
				System.exit(0);
			}
		}
		
		total = total - 3;
		System.out.println(total);
	}

}
