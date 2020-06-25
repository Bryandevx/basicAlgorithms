#include <iostream>
#include <vector>
using namespace std;



int binarySearch(vector<int>array, int left, int right, int objective){
	//check if left > right
	if(right >= left){
		int mid = left + (right - left) / 2;
		if(array[mid] ==  objective){
			return mid;
		} else {
			if(array[mid] > objective){
				right = mid;
				return binarySearch(array, left, right - 1, objective);
			} else{
				left = mid;
				return binarySearch(array, left + 1, right, objective);
			}
		}
		
		
	} else{
		return 0;
	}
}

int main(int argc, char *argv[]) {
	
	vector<int> array;
	
	array.push_back(1);
	array.push_back(12);
	array.push_back(17);
	array.push_back(22);
	
	int objective = 0;
	
	cout << "Digite un numero: ";
	cin >> objective;
	
	int mid = binarySearch(array, 0, array.size(), objective);
	if(mid != 0){		
		cout << "Number --> " << objective << " found at pos --> " << mid << endl;
	} else{
		cout << "Number not found!" << endl;
	}

	
	return 0;
}

