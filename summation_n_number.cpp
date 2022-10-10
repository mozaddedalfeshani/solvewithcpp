#include <iostream>
using namespace std;
int main()
{
    int last; // last value declaration
    // input the last value
    cin >> last;
    // solve by mathmetical formula
    int sum;
    // declare sum for summation value store

    sum = (last*(last + 1) / 2);
    // print the summation value
    cout << sum << endl;
    return 0;
}