#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
    int m_i = 0;
    virtual void print()
    {
        cout << "I'm Base" << endl;
    }

};

class Derived1 : public Base
{
public:
    int m_d = 0;
    virtual void print() override
    {
        cout << "I'm Derived1" << endl;
    }

};

class Derived2 : public Base
{
public:
    int m_d = 0;
    string m_s = "123";
    virtual void print() override
    {
        cout << "I'm Derived2" << endl;
    }

};
int main()
{

    Derived2 d2;
    Base *b = &d2;
    b->print();

    auto *base_to_d2 = dynamic_cast<Derived2*>(b);

    cout << base_to_d2->m_s << endl;


    return 0;
}
