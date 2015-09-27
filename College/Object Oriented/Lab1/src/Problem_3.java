import java.util.Scanner;

public class Problem_3 {
	public static void main(String[] args){

		Scanner keyboard = new Scanner(System.in);
		String month, day, year;
		
		//Variable which will hold the date
		String holder = null;
		
		//Variables to check for backslashes
		String slash1, slash2;
		
		System.out.println("Please enter a date in the standard US date format");
		System.out.println("mm/dd/yy");
		System.out.println("For numbers that are less than 10 please enter a zero in front of them");
		System.out.print("\n>> ");
		
		holder = keyboard.next();
		
		//Initiate variables
		slash1 = holder.substring(2, 3);
		slash2 = holder.substring(5, 6);
		
		//Happens if incorrect format entered
		while((holder.length()!=8)||(!slash1.equals("/"))||(!slash2.equals("/"))){
			System.out.println("You did not enter a total of 6 numbers");
			
			holder = null;
			
			System.out.println();
			System.out.println("Please enter a date in the standard US date format");
			System.out.println("mm/dd/yy");
			System.out.println("For numbers that are less than 10 please enter a zero in front of them");
			System.out.print("\n>> ");
			
			holder = keyboard.next();
		}
		

		//Sets strings to the month, day, and year
		month = holder.substring(0,2);
		day = holder.substring(3,5);
		year = holder.substring(6,8);
		
		//Prints out to the correct format based on which format wanted
		System.out.println();
		System.out.println("The European format for "+holder+" is: "+day+"."+month+"."+year);
		//System.out.println(day + "." + month + "." + year);
	
	
	}
}
