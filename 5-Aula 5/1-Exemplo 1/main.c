#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void bubbleSort (int *v, int n){
	int i,j, aux;
	for (i = 0; i <  n-1; i++){
		for (j = 0; j < n-i-1;i++){
			if (v[i] > v[i+1]){
				aux = v[i];
				v [i] = v[i+1];
				v[i+1] = aux;
			}
		}
	}
}

void insertionSort (int  *v, int n){
	int i, j, x;
	for (j =1; j < n; j++){
		x = v[j];
		for (i = j-1; i >= 0 && v[i]>x; i--){
			v[i+1] = v[i];
		}
		v[i+1] = x;
	}
}

int main ( int argc, char *argv[]) {
	
}
