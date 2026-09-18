#include <iostream>
#include <cstring>
#include <cassert>
using namespace std;

bool isSorted(const int* arr, const int size) {
	for(int i = 0; i < size - 1; i++) {
		//check if the current element is greater than the next element
		if(arr[i] > arr[i + 1]) {
			return false;
		}
	}
	//if the loop completes without finding any unsorted elements, the array is sorted
    return true; 
}

// Test function containing a sorted array
void testSortedArray(){
	int sortedArray[] = {1, 2, 3, 4, 7};
	assert(isSorted(sortedArray, 5) == true);
}
//Test function containing an unsorted array
void testUnsortedArray(){
	int unsortedArray[] = {5,6,3,1,7};
	assert(isSorted(unsortedArray, 5) == false);
}

//Test function containing an array with duplicate values
void testDuplicateValues(){
	int duplicateArray[] = {1,1,5,5,6,7};
	assert(isSorted(duplicateArray, 6) == true);
}

//test function with only one element in the array
void testSingleElement(){
	int singleElementArray[] = {12};
	assert(isSorted(singleElementArray, 1) == true);
}

//test function containing array in descending order
void testDescendingOrder(){
	int descendingArray[] = {7,4,3,2,1};
	assert(isSorted(descendingArray, 5) == false);
}

//test function with negative values in the array
void testNegativeValues(){
	int negativeArray[] = {-10,-9,-8,-6,-4};
	assert(isSorted(negativeArray, 5) == true);
}

//test function with empty array
void testEmptyArray(){
	int *emptyArray =  new int[0];
	assert(isSorted(emptyArray, 0) == true);
	delete[] emptyArray;
}

//test function with same values in the array
void testSameValues(){
	int sameValuesArray[] = {5,5,5,5,5};
	assert(isSorted(sameValuesArray, 5) == true);
}

void testNullPtr() {
	int* nullPtr = nullptr;
	assert(isSorted(nullPtr, 0) == true);
}

int main() {
	
	testSortedArray();
	testUnsortedArray();
	testDuplicateValues();
	testSingleElement();
	testDescendingOrder();
	testNegativeValues();
	testEmptyArray();
	testSameValues();
	testNullPtr();


	cout << "All tests passed!" << endl;
	

 	return 0;
}
