#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]){
	// unsigned integer of 8bits
	uint8_t i,j;
	uint8_t one = 1;
	
	FILE *f = fopen(argv[1], "r");
	
	while(fread(&f,1,1,f)){
		for( j = 8; j>0; j--){
			//bitwise shift operator, when j = 0, its leaves it
			//when j = 1 it pushes all the bits to the left
			//prints bit by bit from i, either 1 or 0
			printf("%d",(i &(one <<j-1) ? 1 : 0));
		}
	}
	printf("\n");


       

	return 0;
	}
