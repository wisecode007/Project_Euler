#include <iostream>
using namespace std;
/*				Project Euler 3
	The prime factors of 13195 are 5, 7, 13 and 29.
	What is the largest prime factor of the number 600851475143 ?
	*/

void main()
{
	int number = 600851475143;
	int factor = 2;
	int lastFactor = 1;
	while (number > 1)
	{
		if (number % factor == 0)
		{
			lastFactor = factor;
			number = number / factor;
			while (number % factor == 0)
				number = number / factor;
		}
		factor += 1;
	}
	cout << lastFactor << endl;

	int j;
	cin >> j;
}
