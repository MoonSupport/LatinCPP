#include <iostream>

using namespace std;

class Base {
protected:
    int m_i;

public:
    Base(int a)
        : m_i(a)
    {

    }

    void Print() {
        cout << "I'm  Base" << endl;
    }

    friend std::ostream & operator << (std::ostream & out, const Base &b) {
        out << "Base opertator";
        return out;
    }
};

class Derived : public Base {
private :
        using Base::Print;

public:
    double m_d;

    Derived(int a)
        :Base(a) {

    }

    void Print() {
        Base::Print();
        cout << "I'm  Derived" << endl;
    }

    friend std::ostream & operator << (std::ostream & out, const Derived &b) {
        out << static_cast<Base>(b) << endl;
        out << "Derived opertator";
        return out;
    }
        
};

int main()
{
    Base b(5);
    Derived d(2);

    b.Print();
    d.Print();
    d.Base::Print();
    cout << b << endl;
    cout << d << endl;
    return 0;
}
