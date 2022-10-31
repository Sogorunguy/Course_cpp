#include <iostream>

using namespace std;

int main() 
{
	int v, t;
	cin >> v >> t;
	int s = v * t;
	s = ((s % 109) + 109) % 109;
	cout << s;
	return 0;
}
