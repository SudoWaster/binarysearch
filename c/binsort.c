/*
========================================================================

	BINSORT_T METHODS

========================================================================
*/

#include "bs_local.h"

/*
========================
 SORT_QUESTION constant
========================
*/
const char* SORT_QUESTION = "<%d, %d>? (y/n)\n";

/*
========================

 isAccepted
 
 Checks user input and determines whether it's 'y' or 'n'

========================
*/
static boolean isAccepted(void) {
	char answer = '\0';
	
	while(!(answer == 'y' || answer == 'n')) {
		scanf("%c", &answer);
	}
	
	return (answer == 'y');
}

/*
========================
  
  binsort.guess()
  
========================
*/
void binsort_t_guess(binsort_t *self) {
	self->resetValues(self);
	
	while(self->isNotGuessed(self)) {
		self->setNewNumbers(self);
	}
}

/*
========================
  
  binsort.resetValues()
  
========================
*/
void binsort_t_resetValues(binsort_t *self) {
	self->left = MIN_SECTION;
	self->right = MAX_SECTION;
}

/*
========================
  
  binsort.isNotGuessed()
  
========================
*/
boolean binsort_t_isNotGuessed(binsort_t *self) {
	return (self->left < self->right);
}

/*
========================
  
  binsort.setNewNumbers()
  
========================
*/
void binsort_t_setNewNumbers(binsort_t *self) {
	self->middle = (self->left + self->right)/2;
	
	if(self->isSectionRight(self)) {
		self->right = self->middle;
	} else {
		self->left = self->middle + 1;
	}
}

/*
========================
  
  binsort.isSectionRight()
  
========================
*/
boolean binsort_t_isSectionRight(binsort_t *self) {
	self->prompt(self);
	return isAccepted();
}

/*
========================
  
  binsort.guess()
  
========================
*/
void binsort_t_prompt(binsort_t *self) {
	printf(SORT_QUESTION, self->left, self->middle);
}


/*
========================

  binsort_t constructor

========================
*/
binsort_t *Binsort_Init(void) {
	binsort_t *binsort = malloc(sizeof(binsort_t));
	
	binsort->prompt = binsort_t_prompt;
	binsort->isSectionRight = binsort_t_isSectionRight;
	binsort->setNewNumbers = binsort_t_setNewNumbers;
	binsort->isNotGuessed = binsort_t_isNotGuessed;
	binsort->guess = binsort_t_guess;
	binsort->resetValues = binsort_t_resetValues;
	
	return binsort;
}
