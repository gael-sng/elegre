#include <stdlib.h>
#include <stdio.h>

void sayHI(){
	printf("HI\n");
}

int main (int argc, char const *argv[]){
	sayHI();
	int i;
	for(i=0;i< argc ;i++){
		printf("parametro %d : %s\n", i, argv[i]);
	}

	return 0;
}