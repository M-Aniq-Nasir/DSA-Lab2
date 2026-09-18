#include <iostream>
#include <cstring>
using namespace std;

// function to reverse the string
void reverse(char* str, int size, char* reverseStr) {
	for (int i = 0; i < size; i++) {
		reverseStr[i] = str[size - 1 - i];
	}
	reverseStr[size] = '\0'; // null terminate the reversed string
}


int main() {
	// size of the string
	int size = 20;
	//dynamically allocate memory for the string
	char* str = new char[size];
	

	// take input from the user
	cout << "Enter a string: ";
	cin.getline(str, size);
	int actualSize = strlen(str);
	char* reversedStr = new char[actualSize + 1];// +1 is for the null terminator

	// reverse the string
	reverse(str, actualSize, reversedStr);
	
	// display the reversed string
	cout << "Reversed string: " << reversedStr << endl;

	//deallocate the memory
	delete[] str;
	delete[] reversedStr;


 	return 0;
}
