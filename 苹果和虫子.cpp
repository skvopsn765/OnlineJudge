#include <iostream>
using namespace std;
int main()
{
	int n, x, y, result = 0;
	float c = 0;
	cin >> n >> x >> y;
	if (y % x == 0)
	{
		c = y / x;
	}
	else
	{
		c = y / x + 1;
	}
	if (n>c)
	{
		result = n - c;
	}
	else
	{
		result = 0;
	}

	cout << result << endl;
	return 0;
}