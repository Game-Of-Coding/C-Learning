#include <stdio.h>
int main(void) {
	char *me;
	int i = 0;
	while(i != 1000000000) {
		int fuck = i / 2;
		fuck = fuck / 2;
		me += fuck;
		i++;
		printf("%i\n", i);
	}
}
