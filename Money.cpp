/////////////////////////////////////////////////////////////////
// Money.cpp
#include "Money.h"
#include <iostream>
#include <cmath>

using namespace std;

void Money::setH500(const int x) { h500 = x; };
void Money::setH200(const int x) { h200 = x; };
void Money::setH100(const int x) { h100 = x; };
void Money::setH50(const int x) { h50 = x; };
void Money::setH20(const int x) { h20 = x; };
void Money::setH10(const int x) { h10 = x; };
void Money::setH5(const int x) { h5 = x; };
void Money::setH2(const int x) { h2 = x; };
void Money::setH1(const int x) { h1 = x; };
void Money::setC50(const int x) { c50 = x; };
void Money::setC25(const int x) { c25 = x; };
void Money::setC10(const int x) { c10 = x; };
void Money::setC5(const int x) { c5 = x; };
void Money::setC2(const int x) { c2 = x; };
void Money::setC1(const int x) { c1 = x; };


Money::Money()
{
    h500 = 0;
    h200 = 0;
    h100 = 0;
    h50 = 0;
    h20 = 0;
    h10 = 0;
    h5 = 0;
    h2 = 0;
    h1 = 0;
    c50 = 0;
    c25 = 0;
    c10 = 0;
    c5 = 0;
    c2 = 0;
    c1 = 0;
}
Money::Money(int y)
{
    h500 = y;
    h200 = y;
    h100 = y;
    h50 = y;
    h20 = y;
    h10 = y;
    h5 = y;
    h2 = y;
    h1 = y;
    c50 = y;
    c25 = y;
    c10 = y;
    c5 = y;
    c2 = y;
    c1 = y;
}
Money::Money(int hh500, int hh200, int hh100, int hh50,
            int hh20, int hh10, int hh5, int hh2, int hh1,
            int cc50, int cc25, int cc10, int cc5, int cc2, int cc1)
{
        hh500 > 0 ? h500 = hh500 : h500 = 0;
        hh200 > 0 ? h200 = hh200 : h200 = 0;
        hh100 > 0 ? h100 = hh100 : h100 = 0;
        hh50 > 0 ? h50 = hh50 : h50 = 0;
        hh20 > 0 ? h20 = hh20 : h20 = 0;
        hh10 > 0 ? h10 = hh10 : h10 = 0;
        hh5 > 0 ? h5 = hh5 : h5 = 0;
        hh2 > 0 ? h2 = hh2 : h2 = 0;
        hh1 > 0 ? h1 = hh1 : h1 = 0;
        cc50 > 0 ? c50 = cc50 : c50 = 0;
        cc25 > 0 ? c25 = cc25 : c25 = 0;
        cc10 > 0 ? c10 = cc10 : c10 = 0;
        cc5 > 0 ? c5 = cc5 : c5 = 0;
        cc2 > 0 ? c2 = cc2 : c2 = 0;
        cc1 > 0 ? c1 = cc1 : c1 = 0;
}


istream& operator >> (istream& in, Money& r)
{
    int hh500, hh200, hh100, hh50, hh20, hh10, hh5, hh2, hh1, cc50, cc25, cc10, cc5, cc2, cc1;
    cout << "h500 = "; cin >> hh500;
    cout << "h200 = "; cin >> hh200;
    cout << "h100 = "; cin >> hh100;
    cout << "h50 = "; cin >> hh50;
    cout << "h20 = "; cin >> hh20;
    cout << "h10 = "; cin >> hh10;
    cout << "h5 = "; cin >> hh5;
    cout << "h2 = "; cin >> hh2;
    cout << "h1 = "; cin >> hh1;
    cout << "c50 = "; cin >> cc50;
    cout << "c25 = "; cin >> cc25;
    cout << "c10 = "; cin >> cc10;
    cout << "c5 = "; cin >> cc5;
    cout << "c2 = "; cin >> cc2;
    cout << "c1 = "; cin >> cc1;
    Money(hh500, hh200, hh100, hh50, hh20, hh10, hh5, hh2, hh1, cc50, cc25, cc10, cc5, cc2, cc1);
}

 Money::operator string() const
{
    stringstream ss;
    int a = h500 * 500 + h200 * 200 + h100 * 100 +
            h50 * 50 + h20 * 20 + h10 * 10 + h5 * 5 + h2 * 2 + h1;
    int b = c50 * 50 + c25 * 25 + c10 * 10 + c5 * 5 + c2 * 2 + c1;
    while (b >= 100)
    {
        b -= 100;
        a += 1;
    }
    if (b < 10)
        ss << "Sum = " << a << ",0" << b << endl;
    else
        ss << "Sum = " << a << "," << b << endl;

    return ss.str();
}

ostream& operator << (ostream& out, const Money& r)
{
    cout << "----------------------------------------------------------------------------\n";
    cout << "|500h|200h|100h| 50h| 20h| 10h|  5h|  2h|  1h| 50c| 25c| 10c|  5c|  2c|  1c|\n";
    cout << "----------------------------------------------------------------------------\n";
    cout << "|" << setw(4) << r.getH500() << "|" << setw(4) << r.getH200() << "|" << setw(4) << r.getH100() << "|" <<
         setw(4) << r.getH50() << "|" << setw(4) << r.getH20() << "|" << setw(4) << r.getH10() << "|" << setw(4) <<
         r.getH5() << "|" << setw(4) << r.getH2() << "|" << setw(4) << r.getH1() << "|" << setw(4) << r.getC50() <<
         "|" << setw(4) << r.getC25() << "|" << setw(4) << r.getC10() << "|" << setw(4) << r.getC5() << "|" <<
         setw(4) << r.getC2() << "|" << setw(4) << r.getC1() << "|\n" <<
         "----------------------------------------------------------------------------\n";
   out << string (r);
   return out;
}

double Money::Total(Money a) {
    int hrn, kop;
    double sum;
    hrn = a.getH500() * 500 + a.getH200() * 200 + a.getH100() * 100 +
          a.getH50() * 50 + a.getH20() * 20 + a.getH10() * 10 + a.getH5() * 5 + a.getH2() * 2 + a.getH1();
    kop = a.getC50() * 50 + a.getC25() * 25 + a.getC10() * 10 + a.getC5() * 5 + a.getC2() * 2 + a.getC1();
    sum = (double)hrn + (double)kop / 100.;
    return sum;
}

Money Money::Add(const Money x, const Money y)
{
    double subt = Total(x) + Total(y);
    int hrn = (int)subt;
    int coin = (floor((subt - hrn) * 100 + 0.501));

    return Change(hrn, coin);
}
Money Money::Subt(const Money x, const Money y)
{
    double subt = Total(x) - Total(y);
    if (subt <= 0)
    {
        cerr << "Sum on first Money is lesser than that on the latter.\n";
    }
    else
    {
        int hrn = (int)subt;
        int coin = (floor((subt - hrn) * 100 + 0.501));

        return Change(hrn, coin);
    }
}

Money Money::Mult(Money x, const double y)
{
    if (y <= 0)
        return Money(x.getH500(), x.getH200(), x.getH100(), x.getH50(), x.getH20(), x.getH10(), x.getH5(), x.getH2(), x.getH1(), x.getC50(),
                   x.getC25(), x.getC10(), x.getC5(), x.getC2(), x.getC1());
    else
    {
        if (y != 1)
        {
            double sum = Total(x);
            sum *= y;
            int hrn = (int)sum;
            int coin = (floor((sum - hrn) * 100 + 0.501));

            return Change(hrn, coin);
        }
        else
            return Money(x.getH500(), x.getH200(), x.getH100(), x.getH50(), x.getH20(), x.getH10(), x.getH5(), x.getH2(), x.getH1(), x.getC50(),
                       x.getC25(), x.getC10(), x.getC5(), x.getC2(), x.getC1());
    }
    return x;
}

Money Money::Change(int hrn, int coin)
{
    int hh500 = hrn / 500;
    hrn -= hh500 * 500;
    int hh200 = hrn / 200;
    hrn -= hh200 * 200;
    int hh100 = hrn / 100;
    hrn -= hh100 * 100;
    int hh50 = hrn / 50;
    hrn -= hh50 * 50;
    int hh20 = hrn / 20;
    hrn -= hh20 * 20;
    int hh10 = hrn / 10;
    hrn -= hh10 * 10;
    int hh5 = hrn / 5;
    hrn -= hh5 * 5;
    int hh2 = hrn / 2;
    hrn -= hh2 * 2;
    int cc50 = coin / 50;
    coin -= cc50 * 50;
    int cc25 = coin / 25;
    coin -= cc25 * 25;
    int cc10 = coin / 10;
    coin -= cc10 * 10;
    int cc5 = coin / 5;
    coin -= cc5 * 5;
    int cc2 = coin / 2;
    coin -= cc2 * 2;
    return Money(hh500, hh200, hh100, hh50, hh20, hh10, hh5, hh2, hrn, cc50, cc25, cc10, cc5, cc2, coin);

}