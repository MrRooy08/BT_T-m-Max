#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int max = 0;
    cout << "\n Nhập 2 số nguyên a và b: ";
    cin >> a; cin >> b;
    if (a > b)
    {
        max = a;
        cout << max;
    }
    else
    {
        max = b;
        cout << max;
    }
}
