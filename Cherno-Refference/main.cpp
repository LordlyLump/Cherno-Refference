/*
What is a reference?

A refference is a way to refference an excisting variable.

*/

#include <iostream>

//int& ref = a; // (int&) declaring the refference (ref) name. (a) a refference must reference something


void  Increment(int& value)
{

	value++;
}

int main()
{
	int a = 5;

	Increment(a);
	

	std::cout << a << std::endl;

	// once a refference is declared you cannot change what it refferences.

	int b = 2;
	int c = 3;

	int& b_reff = b;
	b_reff = c; // this will set b to c's value of 3 not change the reference to refer to c. 



	return 0;
}

