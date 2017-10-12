class HW1_1 {
	public static void main(String[] args) {
		Account test = new Account("asshole", 10000);
		test.withDraw(10001);
		System.out.printf("%.3f", test.getBalance());
	}
}

class Account {   
	private String name; 
	private double balance; 

	public void withDraw(double m) {
		if (m > balance) {
			System.out.printf("Plz go to rob a bank\n");
			return;
		}
		balance -= m;
	}
	  
	public Account(String name, double balance) 
	{
		this.name = name; 
		if (balance > 0.0) 
			this.balance = balance; 
	}

	
	public void deposit(double depositAmount) 
	{      
		if (depositAmount > 0.0) 
			balance = balance + depositAmount;
	}

	public double getBalance()
	{
		return balance; 
	} 

	public void setName(String name)
	{
		this.name = name; 
	} 

	public String getName()
	{
		return name; 
	} 
}