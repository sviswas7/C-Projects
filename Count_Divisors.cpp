#include <iostream>
using namespace std;

int main()
{

	int l, r, k ;
	cin >> l >> r >> k;
	int divisor = 0;
	for(int i = l; i <= r; i++)
	{
		
		if (i % k == 0)
		{
			divisor++;
		}

	}

	cout << divisor;

	return 0;
}
