import java.util.Scanner;

class HW2_1 {
	public static void main(String[] args) {
		System.out.println("Plz input a circle's radius:");
		Scanner input = new Scanner(System.in);
		double r = input.nextInt();
		System.out.println("This circle's area is " + circleArea(r));
	}
	
	static double circleArea(double radius) {
		return radius*radius*3.14;
	}
}