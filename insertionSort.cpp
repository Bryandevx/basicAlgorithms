#include<iostream>
using namespace std;


void insertionSort(int array[], int n){
	
	
	for(int i=1; i < n; i++){
		int possibleMin = array[i];
		int j = i - 1;
		while(j >= 0 && array[j] > possibleMin){
			array[j+1] = array[j];
			j = j - 1; // switching pos while finding if some array pos contains less than possibleMin
		}
		array[j+1] = possibleMin; // if nothings happens it will put the number in the same initial position

	}	
	
	for(int i=0; i < n; i++){
		cout << array[i] << " "; 
	}
}

int main(){
	
	int array[7];
	array[0] = 5;
	array[1] = 1;
	array[2] = 8;
	array[3] = 9;
	array[4] = 44;
	array[5] = 22;
	array[6] = 12;

	
	insertionSort(array, 7);
	
	return 0;
}
