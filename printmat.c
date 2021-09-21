#include <stdio.h>

void printmat(int[], int, int);

int main(void){
	int rows = 7;
	int cols = 7;
	int x[7][7] = { {0,0,77,88,99,145, 400}, {0,0,0,0,0,0,0}};
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			x[i][j] = 0; 
		}
	}

	printmat(x,rows,cols);
	
}

void printmat(int* arr, int rows, int cols){


	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			arr[i][j] = 9;
		}
	}

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			printf("%d", arr[i][j]);
		}
		printf("%s", "\n");
	}
}
