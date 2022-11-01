#include <iostream>

using namespace std;

int main()
{
	int	x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	int a1, a2, a3;
	int a;
	a1 = (x1 / 2) + (x1 % 2);
	a2 = (x2 / 2) + (x2 % 2);
	a3 = (x3 / 2) + (x3 % 2);
	a = a1 + a2 + a3;
	cout << a;
	return 0;

}
