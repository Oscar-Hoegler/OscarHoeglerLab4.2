/*Oscar Hogler, September 15 2022, Laboratory 4.1
 *OscarHoeglerLab4.1.cpp, find largest number amongst 3*/

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	float num1, num2, num3;

	cout << "Please put your three numbers with a space in between"; cin >> num1 >> num2 >> num3;

	if (num1 > num2) { num1 > num3 ? cout << "your largest is " << num1 : cout << "your largest is " << num3; }
	else { num2 > num3 ? cout << "your largest is " << num2 : cout << "your largest is " << num3; }
	
	return 0;
}