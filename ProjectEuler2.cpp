#include <iostream>
using namespace std;

/*
				Project Euler 2
	Each new term in the Fibonacci sequence is generated by adding the previous two terms.
	By starting with 1 and 2, the first 10 terms will be:
				1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
	By considering the terms in the Fibonacci sequence whose values do not exceed four million,
	find the sum of the even-valued terms.
*/

void main()
{
	int a = 1;
	int b = 1;
	int c = 0;
	int sum = 0;
	int limit = 4000000; //4 million
	while (b < limit)
	{
		if (b % 2 == 0)
			sum += b;

		c = a+b;
		a = b;
		b = c;
	}
	cout << sum << endl;

//		for not exiting the CMD
	int j;
	cin >> j;
}