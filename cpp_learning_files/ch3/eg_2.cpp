#include <iostream>
using namespace std;

void MultNum(){

	cout << "Enter 1st num: ";
	int FirstNum = 0;
	cin >> FirstNum;

	cout << "Enter 2nd num: ";
	int SecNum = 0;
	cin >> SecNum;

	//Mult the two nums, store in var
	int MultRes = FirstNum * SecNum;

	//Display result
	cout << FirstNum << " x " << SecNum;
	cout << " = " << MultRes << endl;

}

int main(){

	cout << "This program will help you multiply two numbers" << endl;

	//Call func taht does all the work
	MultNum();

	//cout << FirstNum << " x " << SecNum;
        //cout << " = " MultRes << endl;

	return 0;
}
