var MAX_SECTION = 1000;
var MIN_SECTION = 0;

var BinarySearch = function() {
	this.resetValues();
};

BinarySearch.prototype = {
	guess : function() {
		this.resetValues();
	},
	resetValues : function() {	
		this.left = MIN_SECTION;
		this.right = MAX_SECTION;
	}
};
