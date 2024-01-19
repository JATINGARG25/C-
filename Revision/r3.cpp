#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    void display(void)
    {
        cout << a << "," << b ;
    }
};

int main()
{
    A jatin(12, 45);
    A dhruv(453, 564);

    jatin.display();
}