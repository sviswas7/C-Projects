#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 0;
	int notPrime = 0;
	
	
	while (n != -1)
	{
		for (int i = 0; i < 100000000; i++)
		{
			if (n % 1 == 0 && i > 1 && n % i == 0)
			{
				count++;

			}
		}
		if (count == 1)
		{
			cout << "Prime" << endl;
		}
		else
		{
			cout << "Not Prime" << endl;
		}
		count = 0;
		cin >> n;
	}

		


	return 0;
}
