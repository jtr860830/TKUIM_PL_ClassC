import java.time.*;

class HW1_2 {
	public static void main(String[] args) {
		Date test = new Date(1, 2, 3);
		test.displayDate();
		test.setYear(1997);
		test.setMonth(8);
		test.setDay(30);
		System.out.printf("%d %d %d\n", test.getYear(), test.getMonth(), test.getDay());
		test.displayDate();
	}
}

class Date {
	private int year, month, day;
	
	public Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	
	public void setDay(int d) {
		day = d;
	}
	
	public void setMonth(int m) {
		month = m;
	}
	
	public void setYear(int y) {
		year = y;
	}
	
	public int getDay() {
		return this.day;
	}
	
	public int getMonth() {
		return this.month;
	}
		
	public int getYear() {
		return this.year;
	}
	
	public void displayDate() {
		System.out.printf("%4d/%2d/%2d\n", year, month, day);
	}
}