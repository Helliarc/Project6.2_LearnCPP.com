#include <iostream>

int main()
{
	int array[5] = { 7, 4, 5 }; //only initializes the first 3 elements of the Array

	std::cout << array[0] << '\n';
	std::cout << array[3] << '\n';

	return 0;
}


/*
int main()
{
	int prime[5]; //Holds the first 5 prime numbers
	prime[0] = 2;	//
	prime[1] = 3;	//
	prime[2] = 5;	//	This is the hard way, especially if you want to enter more than 5 variables in the array!
	prime[3] = 7;	//
	prime[4] = 11;	//

	//This is the easier way!
	int prime[5] = { 2, 3, 5, 7, 11 }; //This uses and "Initializer List" to initialize the fixed array

	return 0;
}
*/