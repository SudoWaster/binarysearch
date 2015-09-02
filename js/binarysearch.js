var MAX_SECTION = 1000;
var MIN_SECTION = 0;

var BinarySearch = function() {
	this.resetValues();
};

BinarySearch.prototype = {
	guess : function() {
		this.resetValues();
		
		while(this.isNotGuessed()) {
			this.setNewGuessedNumbers();
		}
		
		return this.left;
	},
	
	resetValues : function() {	
		this.left = MIN_SECTION;
		this.right = MAX_SECTION;
	},
	
	isNotGuessed : function() {
		return (this.left < this.right);
	},
	
	setNewGuessedNumbers : function() {
		this.middle = parseInt((this.left + this.right)/2);
		
		if(this.isSectionRight()) {
			this.right = this.middle;
		} else {
			this.left = this.middle + 1;
		}
		
		return this.left;
	},
	
	isSectionRight : function() {
		var sort_question = "<" + this.left + ", " + this.middle + ">?";
		
		return (confirm(sort_question));
	}
};
