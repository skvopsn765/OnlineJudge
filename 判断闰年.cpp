#include <iostream>
using namespace std;

int main() {
	int yy = 0;
	cin >> yy;
	int adj = 0;
	if (yy % 4 == 0) {
		if (yy % 100 == 0) {
			if (yy % 400 == 0) {
				adj = 1;
			}
			else { adj = 0; }
		}
		else { adj = 1; }
	}
	else { adj = 0; }
	
	if (adj == 0) {
		cout << 'N' << endl;
	}
	else {
		cout << 'Y' << endl;
	}
}