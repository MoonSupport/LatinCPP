#include <iostream>
#include <vector>

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

class Der : public Base
{
public:
    int m_d = 0;
    virtual void print() override
    {
        cout << "I'm Der" << endl;
    }

};
int main()
{
    Der d;
    Base b = d;
    b.print();
    
    //reference_wrapper를 사용하거나 *포인터 사용이가능하다.
    vector<reference_wrapper<Base>> my_vec;
    my_vec.push_back(b);
    my_vec.push_back(d);

    //reference_wrapper는 ref를 받아오기위해 get()을 사용한다.
    for (auto & a : my_vec)
        a.get().print();

    vector<Base*> my_vec2;
    my_vec2.push_back(&b);
    my_vec2.push_back(&d);

    for (auto & a : my_vec2)
        a->print();
    return 0;
}
