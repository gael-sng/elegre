#include <stdlib.h>
#include <stdio.h>



int main (int argc, char const *argv[]){
	
	int i;
	for(i=0;i< argc ;i++){
		printf("%d : %s\n", i, argv[i]);
	}

	printf("olaaa\n");

	return 0;
}