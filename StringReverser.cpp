// String Reverser

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string reverse(string);

int main()
{
	// Data
	string userInput;

	// Output
	cout << "\nThis program prints the string in reverse order using recursion.\n" << endl;

	// User Input	 
	cout << "Enter string: ";
	getline(cin, userInput);
	cout << endl;

	// Call Function
	cout << reverse(userInput) << endl;
	cout << endl;

	return 0;
}

string reverse(string input)
{	
	if (input.length() == 1)
	{
		cout << input << endl;
		cout << endl;
		return input;
	}
	else
	{	
		cout << input << endl;
		return reverse(input.substr(1, input.length())) + input.at(0);
	}	
}