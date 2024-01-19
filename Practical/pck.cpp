#include <iostream>
#include <conio.h>
using namespace std;
double power(double n, int p = 2);
int main()
{
    double n, r;
    int p;
    char c;
    cout << "enter the number:";
    cin >> n;
    do
    {
        cout << "do you want to enter power(y/n)?:";
        cin >> c;
        if (c == 'y')
        {
            cout << "enter the power to be raised:";
            cin >> p;
            r = power(n, p);
        }
        else
        {
            if (c == 'n')
            {
                p = 2;
                r = power(n);
            }
            else
                cout << "invalid choice\n";
        }
    } while (c != 'y' && c != 'n');
    cout << n << "^" << p << "(" << n << " raised to the power " << p << ")=" << r;
    getch();
    return 0;
}
double power(double n, int p)
{
    double r = 1;
    int i;
    if (p < 0)
        r = 1 / power(n, -p);
    else
        for (i = 1; i <= p; i++)
            r = r * n;
    return (r);
}
