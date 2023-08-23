#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string input;
	cout<<"Enter a string: ";
	getline(cin,input);
	// Convert to uppercase
    string uppercaseInput = input;
    transform(uppercaseInput.begin(), uppercaseInput.end(), uppercaseInput.begin(), ::toupper);
    
    cout << "Uppercase: " << uppercaseInput << endl;


	return 0;
}
