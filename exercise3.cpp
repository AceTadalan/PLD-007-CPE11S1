#include <iostream>
using namespace std;

int main (){
	double x;
	
	
	cout << "Enter your grades " << endl;
	cin >> x ;
	
	if (x >= 94 && x >= 100) { cout<< "Excellent" << endl; }	
	
	else if (x >= 85.5 && x <= 93.99) { cout << "Superior" << endl; } 
	
	else if (x >= 83 && x <= 88.49) { cout << "Meritorious" << endl; } 
	
	else if (x >= 77.5 && x < 82.99) { cout << "Very Good" << endl; }
	
	else if (x >= 72 && x < 77.49) { cout << "Good" << endl; } 
	
	else if (x >= 65.5 && x < 71.99) { cout << "Very Satisfactory" << endl; } 
	
	else if (x >= 61 && x < 65.49) { cout << "Satisfactory" << endl; } 
	
	else if (x >= 55.5 && x <  60.99) { cout << "Fair" << endl; } 
	
	else if (x >= 50 && x < 55.49) { cout << "Passing" << endl; } 
	
    else { cout << "Fail" << endl; }
    

	return 0;
}
