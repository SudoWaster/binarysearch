/*
===================
 CONSTANTS
===================
*/
var MAX_SECTION = 1000;
var MIN_SECTION = 0;

/*
===================
 CONSTRUCTOR
===================
*/
var BinarySearch = function() {
	this.resetValues();
};

/*
===================
 METHODS
===================
*/
BinarySearch.prototype = {
	
	// guess() - start asking loop
	guess : function() {
		this.resetValues();
		
		while(this.isNotGuessed()) {
			this.setNewGuessedNumbers();
		}
		
		return this.left;
	},
	
	// resetValues() - get a fresh set of section values
	resetValues : function() {	
		this.left = MIN_SECTION;
		this.right = MAX_SECTION;
	},
	
	// isNotGuessed() - check if have guessed yet
	isNotGuessed : function() {
		return (this.left < this.right);
	},
	
	// setNewGuessedNumbers() - get new middle and check if right, then correct section
	setNewGuessedNumbers : function() {
		this.middle = parseInt((this.left + this.right)/2);
		
		if(this.isSectionRight()) {
			this.right = this.middle;
		} else {
			this.left = this.middle + 1;
		}
	},
	
	// isSectionRight() - ask user if it's a guess
	isSectionRight : function() {
		var sort_question = "<" + this.left + ", " + this.middle + ">?";
		
		return (confirm(sort_question));
	}
};
