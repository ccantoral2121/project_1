#include <stdio.h>
#include <stdlib.h>

void assending(int lower, int upper, int count){
	
	FILE * fptr;
	fptr = fopen("assending_data.txt", "w");
	
	if(fptr == NULL){
		printf("Error!");
	}

	int cap = lower;
	int i;

	for(i = 0; i < count; i++){

		fprintf(fptr,"%d\n", cap);
		if(cap < upper){
			cap++;
		}else{
			cap = lower;
		}
		//data testing purpose print
		printf("%d ", cap);
		//inserting data into file
	

	}
	//new line
	printf("Done");
	printf("\n");
	//closing file
	fclose(fptr);
}

//Driver code
int main(){
	
	//calling function
	assending(0, 1000, 1000000);	
	return 0;	

}
