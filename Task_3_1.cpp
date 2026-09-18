#include <iostream>
using namespace std;

// Function to analyze the pointer
void analyze_pointer(int *ptr){
	// Print the address stored in the pointer and the value pointed to by the pointer
	cout<< "The address stored in the pointer is: " << ptr << endl;
	cout<< "The value pointed to by the pointer is: " << *ptr << endl;
}

int main() {
	// Declare an integer variable and a pointer to it
	int i = 10;
	int *ptr = &i;
	// Call the function to analyze the pointer
	analyze_pointer(ptr);
 	return 0;
}
