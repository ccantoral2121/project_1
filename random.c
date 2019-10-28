#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printRandoms(int lower, int upper,  
                             int count) 
{ 

	FILE * fptr;
    	fptr = fopen("random.txt", "w");

	if(fptr == NULL){
		printf("Error");
	}

    int i; 
    for (i = 0; i < count; i++) { 
        int num = (rand() % 
           (upper - lower + 1)) + lower; 
	fprintf(fptr, "%d\n", num);
        printf("%d ", num); 
    } 
    fclose(fptr);
} 
  
// Driver code 
int main() 
{ 
    int lower = 0, upper = 1000, count = 1000000; 
  
    // Use current time as  
    // seed for random generator 
    srand(time(0)); 
  
    printRandoms(lower, upper, count); 
  
    return 0; 
} 
