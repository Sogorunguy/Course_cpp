#include <iostream>

using namespace std;

int main() 
{
	int h1, m1, s1, h2, m2, s2;
	
	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	
	int sec1;
	
	h1 = h1 * 60 * 60;
	
	m1 = m1 * 60;
	
	sec1 = h1 + m1 + s1;
	
	h2 = h2 * 60 * 60;
	
	m2 = m2 * 60;
	
	int sec2;
	
	sec2 = h2 + m2 + s2;
	
	cout << sec2 - sec1;

	return 0;
}
