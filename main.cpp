/////////////////////////////////////////////////////////////////
// Source.cpp
#include "Money.h"

using namespace std;

int main()
{
   Money a(1,1,2,3,4,1,2,3,1,3,4,1,2,1,3);

    cout << a <<endl;

    Money b(1,1,2,3,1,2,3,1,2,3,1,2,3,1,3);
    cout << b <<endl;

    Money c = c.Add(a, b);
    cout << c <<endl;

    Money d = d.Subt(a, b);
    cout << d <<endl;

    Money t(1,1);
    cout << t <<endl;


    double x;
    cout << "What is the number the sum should be multiplied by? x = "; cin >> x;
    t.Mult(t,x);
    cout << t.Mult(t,x) <<endl;

    return 0;
}