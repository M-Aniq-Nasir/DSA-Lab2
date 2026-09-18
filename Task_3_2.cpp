#include <iostream>
using namespace std;

// Function to analyze the pointer
void analyze_pointer(int *ptr){
	// Print the address stored in the pointer and the value pointed to by the pointer
	cout<< "The address stored in the pointer is: " << ptr << endl;
	cout<< "The value pointed to by the pointer is: " << *ptr << endl;
}

int main() {
	// Declare an integer variable on the stack
	int iValue = 10;
	// Pass the address of the stack variable to the function
	analyze_pointer(&iValue); 

	// Dynamically allocate memory for an integer on the heap
	int *ptr = new int; 
	*ptr = 30;
	// Pass the pointer to the function
	analyze_pointer(ptr);
	// Deallocate the dynamically allocated memory
	delete ptr;

	
 	return 0;
}
