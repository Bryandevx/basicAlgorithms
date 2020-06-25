#include <iostream>
#include <vector>
using namespace std;


void bubbleSort(int array[], int n){
	bool sort = false;
	int counter = 0;
	
	while(!sort){
		sort = true;
		for(int i = 0; i < n - 1 - counter; i++){
			if(array[i] > array[i+1]){
				int aux = array[i];
				array[i] = array[i+1];
				array[i+1] = aux;
				sort = false;
			}
		}
		counter ++;
	}
	
	for(int x = 0; x < n; x++){
		cout << array[x] << " ";
	}
}

int main(int argc, char *argv[]) {
	int array[4];
	array[0] = 5;
	array[1] = 3;
	array[2] = 7;
	array[3] = 1;
	
	bubbleSort(array, 4);
	
	return 0;
}

