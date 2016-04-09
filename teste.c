#include <stdlib.h>
#include <stdio.h>

int fatorial(int n){
	if(n == 0)return 1;
	return n * fatorial(n-1);
}

int main (int argc, char const *argv[]){
	
	int i;
	for(i=0;i< argc ;i++){
		printf("parametro %d : %s\n", i, argv[i]);
	}

	printf("fatorial de %d é %d\n", argc, fatorial(argc));

	return 0;
}