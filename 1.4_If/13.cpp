#include <iostream>
using namespace std;
int main()
{
    int a, b, c, min = 0, middle = 0, max = 0;
    cin >> a >> b >> c;
    if (a < b)
    {
        min = a;
        max = b;
    }
    else
    {
        min = b;
        max = a;
    }
    if (c < min)
    {
        middle = min;
        min = c;
    }
    else if (c > max)
    {
        middle = max;
        max = c;
    }
    else
    {
        middle = c;
    }
    cout << min << " " << middle << " " << max;
    return 0;
}
