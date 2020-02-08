#include <iostream>

using namespace std;
class PowerDevice
{

public:
    int m_power;
    PowerDevice(int power){
        cout << "PowerDevice : " << power << endl;
    }

};

class Scanner : virtual public PowerDevice
{
public:
    Scanner(int scan, int power)
        :PowerDevice(power) {
        cout << "Scanner : " << scan << endl;
    }
};

class Printer : virtual public PowerDevice
{
public:
    Printer(int prin, int power)
        :PowerDevice(power) {
        cout << "Printer : " << prin << endl;
    }
};

class Copier : public Scanner, public Printer
{
public:
    Copier(int scan, int prin, int power)
        :Scanner(scan, power), Printer(prin, power) ,PowerDevice(power){}
};
int main()
{
    Copier c(1, 2, 3);
    //주소값이 다르다.
    cout << &c.Scanner::PowerDevice::m_power << endl;
    cout << &c.Printer::PowerDevice::m_power << endl;
    return 0;
}
