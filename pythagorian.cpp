#include <iostream>
#include <math.h>
using namespace std;
bool detect(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b= y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else if (a == z)
    {
        b = y;
        c = x;
    }
    if (pow(a, 2) = pow(b, 2) + pow(c, 2))
    {
        return true;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int x, y, z;

    bool effect = detect(x, y, z);
    if (effect == true)
    {
        cout << " it's done " << endl;
    }

    return 0;
}