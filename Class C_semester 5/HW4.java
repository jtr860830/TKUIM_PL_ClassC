import java.util.Scanner;

class Rational {
	private int a, b;
	
	public Rational(int x, int y) {
		a = x;
		b = y;
	}

	private int gcd(int a, int b) {
		while (b != 0) {
			int temp = a%b;
			a = b;
			b = temp;
		}
		return a;
	}

	private void simp() {
		int x=gcd(a, b);
		a /= x;
		b /= x;
	}

	public void add(Rational x) {
		a = a*x.b + x.a*b;
		b =	b*x.b;
		simp();
	}

	public void sub(Rational x) {
		a = a*x.b - x.a*b;
		b = b*x.b;
		simp();
	}

	public void mult(Rational x) {
		a = a*x.a;
		b =	b*x.b;
		simp();
	}

	public void div(Rational x) {
		a = a*x.b;
		b = b*x.a;
		simp();
	}

	String format() {
		return String.format("%s%d/%d, %.2f", "This value is ", a, b, a/b);
	}
}

