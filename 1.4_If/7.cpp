	#include <iostream>
	#include <cmath>
	using namespace std;

	int main()
	{
		int g1, v1, g2, v2;
		cin >> g1 >> v1 >> g2 >> v2;
		int g3 = g1 - g2;
		int v3 = v1 - v2;
		if ((abs(g3) <= 1) && (abs(v3) <= 1))
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		return 0;
	}
