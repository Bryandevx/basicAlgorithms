#include <iostream>
using namespace std;


void selectionSort(int array[], int n){
	
	
	for(int i=0; i < n-1; i++){
		int min = array[i];// take the first position of the unsorted array
		int pos;
		int actual_min = min;  // aux variable
		for(int j=i+1; j < n; j++){
			if(array[j] < min){
				min = array[j]; // finds the min value at the unsorted array
				pos = j;
			}
		}
		//check if min value changed and do swap process if necessary
		if(min != actual_min && pos != 0){
			int aux = array[i];
			array[i] = array[pos];
			array[pos] = aux;
		}
	}
	
	
	
	for(int x=0; x < n; x++){
		cout << array[x] << " ";
	}
}

int main(int argc, char *argv[]) {

	int array[8];
	array[0] = 7;
	array[1] = 0;
	array[2] = 9;
	array[3] = 1;
	array[4] = 34;
	array[5] = 20;
	array[6] = 96;
	array[7] = 11;
	
	cout << "Array sorted by selection sort --> ";
	selectionSort(array, 8);
	
	return 0;
}

