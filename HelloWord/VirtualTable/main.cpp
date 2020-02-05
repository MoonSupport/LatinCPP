#include <iostream>

using namespace std;

class Base
{
public:
    virtual void fun1() {};
    void fun2() {};
};

class Der : Base
{
public:
    void fun1() {};
    void fun3() {};

};

int main()
{
    cout << sizeof(Base) << endl;
    cout << sizeof(Der) << endl;
    return 0;
}
