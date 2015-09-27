import java.util.Scanner;

public class Test {
	public static void main(String[] args){
		Scanner keyboard = new Scanner(System.in);
		
		System.out.println("Enter value for n");
		
		int n = keyboard.nextInt();
		int sum = 1;
		
		//Math Section
		
		for(int count=n; count>1; count--){
			int hold;
			hold = count*count;
			sum = sum + hold;
		}
		System.out.println("Ans: "+sum);
	}
}
