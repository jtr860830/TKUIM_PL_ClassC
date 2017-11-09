import java.util.Random;
import java.util.Scanner;

class HW2_2 {
	public static void main(String[] args) {
		Random r = new Random();
		Scanner input = new Scanner(System.in);
		int num = r.nextInt(1000)+1;
		while (true) {
			System.out.print("Plz input an integer: ");
			int ans = input.nextInt();
			if (ans>num)
				System.out.println("Too big");
			else if (ans<num)
				System.out.println("Too small");
			else {
				System.out.println("Correct");
				System.out.print("Enter negative number to quit: ");
				if (input.nextInt()<0)
					break;
				else {
					num = r.nextInt(1000)+1;
					continue;
				}
			}
		}
		System.out.println("Exit");
	}
}