#include <iostream>
using namespace std;
void main()
{
    int x, y, z, k;
    cin >> x;
    cin >> y;
    cin >> z;

    if (x + y + z / 2 < x * y * z)
        k = x + y + z / 2;
    else
        k = x * y * z;
    
    if (x * y > y)
        cout << k + x * y;
    else
        cout << k + y;

}
