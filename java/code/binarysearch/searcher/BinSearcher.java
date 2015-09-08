package binarysearch.searcher;

import java.util.Scanner;

public class BinSearcher {
	
	public BinSearcher() {
		resetValues();
	}
	
	private void resetValues() {
		this.left = SearcherDefaultValues.MIN_SECTION;
		this.right = SearcherDefaultValues.MAX_SECTION;
	}
	
	public void guess() {
		result = getGuessedValue();
	}
	
	
	
	public int getGuessedValue() {
		resetValues();
		
		while(isNotGuessed()) {
			setNewGuessedNumbers();
		}
		
		return this.left;
	}
	
	private void setNewGuessedNumbers() {
		this.middle = getMediumValue();
		
		if(isSectionRight()) {
			this.right = this.middle;
		} else {
			this.left = this.middle + 1;
		}
	}
	
	
	
	
	
	private boolean isNotGuessed() {
		return (left < right);
	}
	
	private int getMediumValue() {
		return (int)((this.left + this.right)/2.0);
	}
	
	private boolean isSectionRight() {
		prompt();
		return isAccepted();
	}
	
	private void prompt() {
		System.out.printf(SearcherDefaultValues.SORT_QUESTION, this.left, this.middle);
	}
	
	private boolean isAccepted() {
		Scanner in = new Scanner(System.in);
		char answer = '\0';
		
		while(!(answer == 'y' || answer == 'n')) {
			answer = in.next(".").charAt(0);
		}
		
		return (answer == 'y');
	}
	
	
	protected static int left;
	protected static int right;
	protected static int middle;
	public static int result;
}
