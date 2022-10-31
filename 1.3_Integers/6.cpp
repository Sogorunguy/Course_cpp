#include <iostream>

using namespace std;

int main()
{
	int a;

	cin >> a;

	int x1, x2, x3;

	x3 = a % 10;

	x2 = (a / 10) % 10;

	x1 = (a / 100);

	cout << x1 + x2 + x3;

	return 0;
}
