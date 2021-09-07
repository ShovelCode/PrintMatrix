#include <stdio.h>

//#DEFINE ROWS 2
//#DEFINE COLS 2

int main(void){
	int x[2][2] = { {0,0}, {0,0}}; //all elements of matrix are zero
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("%d",x[i][j]); 
		}
	}

	
}
