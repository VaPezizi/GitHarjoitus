#include <stdio.h>
#include <stdlib.h>

int main(){
	//UNDEFINED BEHAVIOR RULES!!!!!!
	int * pointer = malloc(sizeof(int));

	for(int i = 0;i<10;i++){
		printf("Value is: %d\n", pointer[i]);
	}
	return 0;
}
