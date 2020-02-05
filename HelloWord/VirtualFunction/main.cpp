#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    string m_name;

public:
    Animal(string name)
        : m_name(name) {

    }

    string getName() { return m_name; }

    virtual void speak() const
    {
        cout << m_name << " ??? " << endl;
    }
};

class Cat :public Animal
{
public:
    Cat(string name)
        :Animal(name) {

    }

    void speak() const
    {
        cout << m_name << " Meow " << endl;
    }
};


class Dog :public Animal
{
public:
    Dog(string name)
        :Animal(name) {

    }

    void speak() const
    {
        cout << m_name << " Woof " << endl;
    }
};
int main() {

    Animal a("Animal");
    Dog d("Dog");
    Cat c("Cat");

    //자식클래스를 부모클래스의 포인터로 캐스팅해서 사용하면
    //자신이 부모클래스인줄 알고 작동한다.
    a.speak();
    d.speak();
    c.speak();

    Animal *a1 = &d;
    Animal *a2 = &c;
    
    a1->speak();
    a2->speak();


    //활용하는 경우
    Cat cats[] = { Cat("cat1"),Cat("cat2"), Cat("cat3"), Cat("cat4"), Cat("cat5") };
    Dog dogs[] = { Dog("dog1"), Dog("dog2") };
    //위에껄 다 확인해볼려면 for문을 사용해야한다.

    Animal* my_animals[] = { &cats[0],&cats[1], &cats[2], &cats[3], &cats[4], &dogs[0], &dogs[1] };

    //부모클래스의 메소드가 실행된다.
    //virtual 을 붙이면 자식클래스인것처럼 실행한다.
    //이런 성질을 다형성이라고 한다.
    for (int i = 0; i < 7; i++)
        my_animals[i]->speak();


    return 0;
}
