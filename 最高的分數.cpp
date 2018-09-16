#include <iostream>
using namespace std;
int a[100];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];
	}
	int maxN = a[0];
	for (int i = 0; i < n; i++)
	{
		if (maxN < a[i])
			maxN = a[i];
	}

	cout << maxN << endl;

	return 0;

}