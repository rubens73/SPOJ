package fjlskdjfslkd;

import java.util.Scanner;

public class SALDO13 {

	public static void main(String[] args) {
		
		Scanner inputs = new Scanner(System.in);
		int input = 0;
	    int balance = 0;
	    int financial_movement = 0;
	    int index = 0;
	    
	    input = inputs.nextInt();
	    if(input>=1 && input<=30)
	    {
	    	balance = inputs.nextInt();
	    	if(validator(balance)==true)
		    {
	    		for(index=0;index<input;index++)
	    		{
		    		financial_movement = inputs.nextInt();
		    		if(validator(financial_movement)==true)
		    		{
		    			balance = balance + financial_movement;
		    		}else{
		    			System.exit(0);
		    		}
	    		}
	    	}else{
	    		System.exit(0);
	    	}
	    	System.out.println(balance);
	    }else{
	    	System.exit(0);
	    }

	}
	
	public static boolean validator(int pValidator)
	{
		if(pValidator>=(-1000) && pValidator<=1000){
			return true;
		}
		return false;
	}

}
