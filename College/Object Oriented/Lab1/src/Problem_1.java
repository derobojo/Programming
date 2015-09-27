import java.util.Scanner;

public class Problem_1 {
	public static void main(String[] args){
			Scanner keyboard = new Scanner(System.in);
	
			System.out.println("You will be entering your total money.");
			
			
			System.out.print("Enter the number of quarters you have >> ");
			int numQuarters = keyboard.nextInt();
			
			System.out.println();
			
			System.out.print("Enter the number of dimes you have >> ");
			int numDimes = keyboard.nextInt();
			
			System.out.println();
			
			System.out.print("Enter the number of nickels you have >> ");
			int numNickels = keyboard.nextInt();
			
			System.out.println();
			
			System.out.print("Enter the number of pennies you have >> ");
			int numPennies = keyboard.nextInt();
			
			//Give values to coins
			double PennieValue = .01;
			double NickelValue = .05;
			double DimeValue = .1;
			double QuarterValue = .25;
			
			double TotalMoney = 0.00;
			
			TotalMoney = ((numQuarters*QuarterValue)+(numDimes*DimeValue)+(numNickels*NickelValue)+(numPennies*PennieValue));
			
			System.out.println();
			System.out.println();
			System.out.println("Your total money is >> $"+TotalMoney);
			
	}
}
