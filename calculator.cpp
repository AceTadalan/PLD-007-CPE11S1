#include <iostream>
using namespace std;

int main () {
	// create c++ program that applies calculator function
	
char c;
	float a = 0;
	float b = 0;
	
	
	cout << "Enter first value: ";
	cin >> a;
	cout << "Enter second value: ";
	cin >> b;
	
	cout << "use MDAS operator" << endl;
	cin >> c;
	
	switch (c){
	
	
	case '+': 
	cout << "sum: " << a + b << endl;
	break;
	
	case '-':
		cout << "difference: " << a - b << endl;
		break;
	
	case '*':
		cout << "product: " << a * b << endl;
		break;
		
	case '/':
		cout << "quotient: " << a / b << endl;
		break;
		

default: {
cout <<"Error";
break;
}
}
	
return 0;
	
}
