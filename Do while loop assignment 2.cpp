// Do while loop assignment 2
// Admission: 147683
//

#include <iostream>
#include <conio.h> 
using namespace std; 

//Using a do…while loop write a program to compute the sum of numbers between 20 and 25


int main() 
{
	//declare and initialize variables
	int num = 20; 
	int sum = 20;
	num++;  

	do
	{
		sum += num;
		num++;

	} while (num<=25); 

	cout << "The sum of the numbers between 20 and 25 is " << sum << endl; 

	return 0; 
}
