import java.util.Scanner;
import java.util.Arrays;
import java.util.Collections;

class HW3 {
	public static void main(String[] args) {
		int size1 = 12;
		int[] nums = new int[size1];
		Scanner input = new Scanner(System.in);
		
		System.out.print("input " + size1 + " numbers to array:");
		for (int i=0; i<size1; i++)
			nums[i] = input.nextInt();
		
		Arrays.sort(nums);
		int size2 = 1;
		for (int i=1; i<size1; i++)
			if (nums[i] != nums[i-1]) size2++;

		int[][] arr = new int[size2][2];
		arr[0][0] = nums[size1-1];
		for (int i=size1-1, j=1; i>0; i--)
			if (nums[i] != nums[i-1]) {
				arr[j][0] = nums[i-1];
				j++;
			}

		int n = 1;
		for (int i=size1-1, j=0; i>0; i--)
			if (nums[i] != nums[i-1]) {
				arr[j][1] = n;
				j++;
				n=1;
			} else {
				n++;
			}
		arr[size2-1][1] = n;
					
		System.out.printf("%8s%8s\n", "Number", "Count");
		for (int i=0; i<size2; i++) {
			for (int j=0; j<2; j++)
				System.out.printf("%8d", arr[i][j]);
			System.out.println();
		}
			
	}	
}