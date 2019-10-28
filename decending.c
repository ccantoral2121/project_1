#include <stdio.h>
#include <stdlib.h>


void decent(int lower, int upper, int count){

	FILE * fptr;
	fptr = fopen("decending_data.txt", "w");

	if(fptr == NULL){
		printf("Error!");

	}

	int cap = upper;
	int i;
	
	for(i = count; i > 0; i--){
		
		fprintf(fptr, "%d\n", cap);
		if(cap > lower){
			cap--;
		}else{
			cap = upper;
		}
		printf("%d ", cap);
	}

	printf("\n");

	fclose(fptr);
}


int main(){
	
	decent(0,1000, 1000000);


	return 0;
}
