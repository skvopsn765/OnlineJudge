#include <iostream>
using namespace std;
int main()
{
	int h = 0, r = 0;
	int waterCount;
	float waterVolume;
	const float pi = 3.1415926;
	cin >> h >> r;

	waterVolume = h * r*r*pi;



	if (waterVolume > 20000)
	{
		waterCount = 1;
	}
	else
	{
		waterCount = (20000 / waterVolume) + 1;
	}

	cout << waterCount << endl;

	return 0;
}
