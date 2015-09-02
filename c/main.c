/*
========================================================================

	MAIN PROGRAM

========================================================================
*/

#include "bs_local.h"

int main() {
	binsort_t *binsort = Binsort_Init();
	
	binsort->guess(binsort);
	
	printf("\n%d\n", binsort->left);
	
	return 0;
}
