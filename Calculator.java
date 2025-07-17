import java.util.Scanner;
public class Calculator {
	public static void main(String[] args) {
		double num, num1, num2;
		
		Scanner number = new Scanner(System.in);
		System.out.print(
		"1. Addition\n"+
		"2. Subtraction\n"+
		"3. Multiplication\n"+
		"4. Division\n"+
		"5. Remainder\n"+
		"Enter your choice >>");
		int selection = number.nextInt();
		System.out.print("Enter first number>>");
		num1 = number.nextDouble();
		System.out.print("Enter second number>>");
		num2 = number.nextDouble();
		switch (selection) {
		case 1:
			num = num1 + num2;
			System.out.println("Number of sum "+num);
			break;
		case 2:
			num = num1 - num2;
			System.out.println("Number of subtraction "+num);
			break;
		case 3:
			num = num1 * num2;
			System.out.println("Number of multiplication "+num);
			break;
		case 4:
			if (num2 != 0) {
			num = num1 / num2;
			System.out.println("Number of division "+num);
			}
			else
				System.out.println("Error: Division by zero!");
			break;
		case 5:
			if (num2 != 0) {
			num = num1 % num2;
			System.out.println("Number of remainder "+num);
			}
			else
				System.out.println("Error: Division by zero!");
			
			break;
		}
		number.close();
	}

}
