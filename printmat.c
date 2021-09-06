#include <stdio.h>

#DEFINE ROWS 3
#DEFINE COLS 4

int main(void){
	int x[ROWS][COLS] = { 0 }; //all elements of matrix are zero
	
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLS; j++){
			printf("%d",x[i][j]); 
		}
	}

	
}
