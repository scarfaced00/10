#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=10;
	char c='a';
	int *iptr;
	float f=12.3;
	
	printf("i: %i%p\n",i,&i);
	printf("c:%i%p\n",c,&c);
	printf("f:%i%p]n",f,&f);
	
	return 0;
}
