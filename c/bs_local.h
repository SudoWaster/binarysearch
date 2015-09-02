#ifndef __BS_LOCAL_H__
#define __BS_LOCAL_H__

#include <stdio.h>
#include <stdlib.h>

#define MAX_SECTION 1000
#define MIN_SECTION 0

extern const char* SORT_QUESTION;

typedef void (*voidfunc_f)(void);

typedef int boolean;
enum { false, true };

typedef struct {
	int left;
	int right;
	int middle;
	
	boolean (*isSectionRight)();
	void (*prompt)();
	void (*setNewNumbers)();
	boolean (*isNotGuessed)();
	void (*guess)();
	void (*resetValues)();
} binsort_t;

binsort_t *Binsort_Init(void);

#endif
