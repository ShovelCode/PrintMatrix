#include <stdio.h>

//#DEFINE ROWS 2 //Why aren't these working?
//#DEFINE COLS 2

void printmat(int, int);

int main(void){
	int rows = 7;
	int cols = 7;
	int x[7][7] = { {0,0,77,88,99,145, 400}, {0,0,0,0,0,0,0}};
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			x[i][j] = 0; 
		}
	}

	printf("%d", x[6][6]);
	
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
