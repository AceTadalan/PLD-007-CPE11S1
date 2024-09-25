#include <iostream>
using namespace std;

int main() {
	
	char gen;
	
	cout << "Enter your gender: M = Male or F = Female" << endl;
	cin >> gen; 
	
	switch (gen) { 
	
	case 'M':
		case 'm':
		cout << "Male";
	break;
		
	case 'F':
	case 'f':
	cout << "Female";
	break;
	
	default:
	cout << "unknown" << endl;
	break;
	}
	
	return 0;
}
