import java.util.Random;

class DeckOfCardsTest {
	public static void main(String[] args) {
		DeckOfCards myDOC = new DeckOfCards();
		myDOC.shuffle();
		for (int i=0; i<52; i++) {
			myDOC.dealCard().showCard();
		}
		System.out.println("-------------------------");
		myDOC.show20suits("Diamonds");
	}
}

class Card {
	private int face;
	private String suit;
	
	public Card(int face, String suit) {
		this.face = face;
		this.suit = suit;
	}
	
	public void showCard() {
		System.out.println(face+" of "+suit);
	}

	public String getSuit() {
		return suit;
	}
}

class DeckOfCards {
	private Card[] deck = new Card[NUMBER_OF_CARDS];
	private int currentCard = 0;
	private static final int NUMBER_OF_CARDS = 52;
	private static final Random randomNumbers = new Random();
	
	public DeckOfCards() {
		String[] suits = {
			"Hearts", "Diamonds", "Clubs", "Spades"
		};
		for (int i=0; i<deck.length; i++) 
			deck[i] = new Card((i+1)%13==0?13:(i+1)%13, suits[i/13]);
	}
	
	public void shuffle() {
		for (int i=0; i<deck.length; i++) {
			int swap = randomNumbers.nextInt(NUMBER_OF_CARDS);
			Card temp = deck[i];
			deck[i] = deck[swap];
			deck[swap] = temp;
		}
		currentCard = 0;
	}
	
	public Card dealCard() {
		if (currentCard < deck.length) 
			return deck[currentCard++];
		else 
			return null;
	}

	public void show20suits(String suit) {
		currentCard = 0;
		for (int i=0; i<20; i++) 
			if (deck[i].getSuit() == suit)
				deck[i].showCard();
	}
}
