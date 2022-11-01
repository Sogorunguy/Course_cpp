#include <iostream>

using namespace std;

int main()
{
	int a, b, n;
	cin >> a >> b >> n;
	int x1, x2;
	x2 = b * n;
	int rubfromkop = x2 / 100;
	x1 = a * n + rubfromkop;
	x2 = x2 % 100;
	cout << x1 << " " << x2;
	return 0;

}
