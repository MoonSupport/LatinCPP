
#include <iostream>
#include <tuple>

using namespace std;

tuple<int, double> getTuple(){
    int a = 10;
    double b = 3.14;
    return make_tuple(a,b);
}

int main(int argc, const char * argv[]) {
    
    tuple<int, double> my_tp = getTuple();
    cout << get<0>(my_tp) << endl;
    cout << get<1>(my_tp) << endl;
    
    auto[c, d] = getTuple();
    cout << c << endl;
    cout << d << endl;
    
    
    return 0;
}
