	#include <iostream>
	#include <cmath>
	using namespace std;

	int main()
	{
		int g1, v1, g2, v2;
		cin >> g1 >> v1 >> g2 >> v2;
		if (abs(g2 - g1) == 2 && abs(v2 - v1) == 1 || abs(g2 - g1) == 1 && abs(v2 - v1) == 2)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		return 0;
	}
