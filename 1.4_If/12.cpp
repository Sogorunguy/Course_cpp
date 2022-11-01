	#include <iostream>
	#include <cmath>
	#include <algorithm>
	using namespace std;
	int main()
	{
		int n, m, x, y;
		cin >> n >> m >> x >> y;
		int kor = min(n, m);
		int dlin = max(n, m);
		cout << min(min(x, y), min(kor - x, dlin - y));
		return 0;
	}
