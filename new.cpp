#include <iostream>
//#include <string>
using namespace std;
/*
class complex
{
    int a, b,sum;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1,complex o2);
    void printnumber()
    {
        cout << "the no is" << a << "+" << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex c1,c2,sum;
    c1.setnumber(4,5);
    c1.printnumber();
    c2.setnumber(6,9);
    c2.printnumber();

    sum=sumcomplex(c1,c2);
    sum.printnumber();
    return 0;


}*/
/*
class binary
{
    string a;

public:
    void setno(void)
    {
        cout << "enter the no:" << endl;
        cin >> a;
    }
    void chkbinary()
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a.at(i) != '0' && a.at(i) != '1')
            {
                cout << "not valid binary no:" << endl;
                exit(0);
            }
            /*else
            {
                cout << "enter the correct binary no:" << endl;
            }
        }
    }
    void getno(void)
    {
        chkbinary();
        cout << "the binary no is:" << a << endl;
    }
};
int main()
{
    binary g;

    int t;
    cin >> t;
    while (t > 0)
    {
        g.setno();
        g.getno();
        t = t - 1;
    }
    return 0;
}*/
class blood_group
{
    string name;
    string parent1;
    string parent2;
    string group_p1;
    string group_p2;
    public:


};