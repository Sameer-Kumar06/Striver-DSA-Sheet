/*
    Euclidean Algorithm

    gcd(a,b) = gcd(a-b, b) = gcd(a%b, b)

    where a>b;

*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        while (a > 0 && b > 0)
        {
            if (a > b)
                a = a % b;
            else
                b = b % a;
        }

        if (a == 0)
            cout << b << endl;
        else
            cout << a << endl;
    }
}