#include <stdio.h>

int main() {
	
	int i=1, l=0, r=1000;
	
	while(l < r) {
		int middle;
		char answer = '\0';
		
		middle = (l+r)/2;
		
		printf("%d: <%d, %d>? (y/n)\n", i, l, middle);
		while(!(answer == 'y' || answer == 'n')) {
			scanf("%c", &answer);
		}
	
		if(answer == 'n') {
			l = middle+1;
		} else {
			r = middle;
		}
		i++;
	}
	
	printf("\n%d", l);
	
	return 0;
}
