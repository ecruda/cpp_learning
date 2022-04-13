#include <iostream>
using namespace std;

int main(){

	cout << "This program will help you multiply two numbers" << endl;

	cout << "Enter first number: ";
	int FirstNum = 0;
	cin >> FirstNum;

	cout << "Enter second number: ";
	int SecNum = 0;
	cin >> SecNum;

	//Mult the two nums, store in result
	int MultRes = FirstNum * SecNum;

	//Display Result
	cout << FirstNum << "x" << SecNum;
	cout << " = " << MultRes << endl;

	return 0;
}
