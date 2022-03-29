#include <iostream>
#include <string>
using namespace std;


int main (){

	//Declare var to store int
	int InNum;

	cout << "Enter an int: ";

	//Store int given user input
	cin >> InNum;

	//same can be done with text
	cout << "Enter your name: ";
	string InName;
	cin >> InName;

	cout << InName << " entered " << InNum << endl;

	return 0;
}
