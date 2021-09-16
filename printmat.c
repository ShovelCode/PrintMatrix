#include <stdio.h>

//#DEFINE ROWS 2
//#DEFINE COLS 2

void printmat(int, int);

int main(void){
	int x[7][7] = { {0,0,77,88,99,145, 400}, {0,0,0,0,0,0,0}}; //all elements of matrix are zero
	
	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 7; j++){
			printf("%d",x[i][j]); 
		}
	}

	printf("%s", "\n\n\n");
	printmat(7, 7);	
}

void printmat(int rows, int cols){

	int y[rows][cols];

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			y[i][j] = 9;
		}
	}

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			printf("%d", y[i][j]);
		}
		printf("%s", "\n");
	}
}
