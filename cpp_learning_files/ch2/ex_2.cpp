#include <iostream>
using namespace std;

//Function declaration
int DemoConsoleOutput();

int main(){

        //Call i.e. invoke the function
        DemoConsoleOutput();

        return 0;

}


int DemoConsoleOutput(){

        cout << "This is a simple string literal" << endl;
        cout << "Writing number five: " << 5 << endl;
	cout << "writing 10 - 5 = " << 10 - 5 << endl;
        cout << "Performing mult 10*5 = " << 10*5 << endl;
        cout << "Pi when approxted is 22/7 = " << 22/7 << endl;
        cout << "Pi more accurately is 22/7 = " << 22.0/7 << endl;

        return 0;

}
