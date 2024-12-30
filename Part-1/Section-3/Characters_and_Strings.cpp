#include <iostream>

using namespace std;

int main()
{
	// char and string are built-in data types.

	char ch = 'b';
	// char is used for storing a single character.
	// A character is represented by ''.
	// Internally, these characters are represented by numbers because computers don't understand characters.
	// So, every character has a numeric representation

	// So, instead of initializing ch with b we can also write 98 (numeric representation of that character).
	// But that is not a good way as someone else will not be able to understand what 98 represents.

	cout << ch << endl
		 << +ch << endl;
	// '+' sign tells the compiler to treat the character as a no. so numeric representation of the character is displayed.

	string myName = "Sansita Jain";
	cout << myName << endl;
	// string is used for storing sequence of characters.
	// a string is represented by ""

	/*
	string name;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Hi " << name << endl;
	*/

	// If the user gives a space b/w the words, then by default all the characters after it including space will be ignored.
	// To read a string with space, we can use getline().
	// getline() is defined in std namespace.

	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Hi " << name << endl;

	// Exercise

	string street;
	cout << "Enter your street: ";
	getline(cin, street);

	string city;
	cout << "Enter your city: ";
	getline(cin, city);

	string state;
	cout << "Enter your state: ";
	getline(cin, state);

	int zipCode;
	cout << "Enter your zip code: ";
	cin >> zipCode;

	cout << "Your address is: " << endl
		 << street << endl
		 << city << ", " << state << ", " << zipCode;

	// Best practice: Declare the variable just before its usage to make the code more readable.

	return 0;
}
