#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cpy = n;
        int sum = 0;
        while (n != 0)
        {
            int r = n % 10;
            sum += r * r * r;
            n = n / 10;
        }

        if (sum == cpy)
            cout << "Armstrong no." << endl;
        else
            cout << "Not an Armstrong no." << endl;
    }
}