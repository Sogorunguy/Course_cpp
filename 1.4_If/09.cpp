	#include <iostream>
	using namespace std;

	int main()
	{
		int g1, v1, g2, v2;
		cin >> g1 >> v1 >> g2 >> v2;
		if (g1 == g2 || v1 == v2 || g1 + v1 == g2 + v2 || g1 - v1 == g2 - v2)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		return 0;
	}
