/////////////////////////////////////////////////////////////////
// Money.h
#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

class Money
{
private:
    int h500, h200, h100, h50, h20, h10, h5, h2, h1, c50, c25, c10, c5, c2, c1;
public:
    void setH500(const int);
    void setH200(const int);
    void setH100(const int);
    void setH50(const int);
    void setH20(const int);
    void setH10(const int);
    void setH5(const int);
    void setH2(const int);
    void setH1(const int);
    void setC50(const int);
    void setC25(const int);
    void setC10(const int);
    void setC5(const int);
    void setC2(const int);
    void setC1(const int);

    int getH500() const { return h500; };
    int getH200() const { return h200; };
    int getH100() const { return h100; };
    int getH50() const { return h50; };
    int getH20() const { return h20; };
    int getH10() const { return h10; };
    int getH5() const { return h5; };
    int getH2() const { return h2; };
    int getH1() const { return h1; };
    int getC50() const { return c50; };
    int getC25() const { return c25; };
    int getC10() const { return c10; };
    int getC5() const { return c5; };
    int getC2() const { return c2; };
    int getC1() const { return c1; };
    Money(int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0,
              int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0, int = 0);
    Money();
    Money(int);


    operator string() const;
    friend ostream& operator << (ostream&, const Money&);
    friend istream& operator >> (istream&, Money&);

    double Total(Money a);
    Money Add(const Money, const Money);
    Money Subt(const Money, const Money);
    Money Mult(Money, const double);
    static Money Change(int, int);
};
