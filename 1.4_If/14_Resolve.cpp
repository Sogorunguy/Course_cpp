	#include <iostream>
	#include <cmath>
	#include <algorithm>
	using namespace std;
	int main()
	{
		int a1, b1, c1, a2, b2, c2;
		cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
		int x1, x2, x3;
		x1 = min(a1, min(b1, c1));
		x3 = max(a1, max(b1, c1));
		x2 = a1 + b1 + c1 - x1 - x3;
		int y1, y2, y3;
		y1 = min(a2, min(b2, c2));
		y3 = max(a2, max(b2, c2));
		y2 = a2 + b2 + c2 - y1 - y3;
		if (x1 == y1 && x2 == y2 && x3 == y3)
		{
			cout << "Boxes are equal";
		}
		else if (x1 <= y1 && x2 <= y2 && x3 <= y3)
		{
			cout << "The first box is smaller than the second one";
		}
		else if (x1 >= y1 && x2 >= y2 && x3 >= y3)
		{
			cout << "The first box is larger than the second one";
		}
		else
		{
			cout << "Boxes are incomparable";
		}
		return 0;
	}
