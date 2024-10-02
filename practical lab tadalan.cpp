#include <iostream>
using namespace std;

int main (){
	
int sum = 0; 
int num;

cout << "Please insert 10 numbers " << endl;
for (int i = 0; i < 10; i++) {cin >> num;
if (num < 5) {sum += num;}
else {cout << "Please enter a number less than 5" << endl;
	i ++ ;}
}
cout << "The sum of numbers that are less than 5 is: " << sum << endl;
	return 0; 
}

