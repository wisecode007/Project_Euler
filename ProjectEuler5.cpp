	// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
	// RequestNUm = What is the smallest positive - חיובי number that is evenly divisible by all of the numbers from 1 to 20?
	
	
#include <iostream>
using namespace std;
void main()
{

	int RequestNUm = 0; //המספר הכי קטן שמתחלק בכל המספרים 1 -20 ללא שארית
	int CheckNum = 0; //המספר שנבדק בחילוק ב 1 -20
	for (CheckNum = 1; CheckNum != RequestNUm; CheckNum++)
	{
		int count = 0;
		for (int DivNum = 1; DivNum < 21; DivNum++)
		{
			if (CheckNum % DivNum == 0)
			{
				count++;
			}
		}
		if (count == 20)
		{
			RequestNUm = CheckNum;
		}
	}
	
	cout << RequestNUm << endl;
	int j;
	cin >> j;
}
