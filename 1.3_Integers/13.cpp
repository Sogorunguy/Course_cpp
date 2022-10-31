#include <iostream>

using namespace std;

int main() 
{
	int n;
	cin >> n;
	int x1, x2, x3, x4;
	x1 = n / 1000;
	x2 = (n % 1000) / 100;
	x3 = (n % 100) / 10;
	x4 = (n % 10);
	cout << 100 * (x1 - x4) + 1000 * (x2 - x3) + 1;
	return 0;
}
