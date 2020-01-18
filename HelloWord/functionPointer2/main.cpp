#include <iostream>
#include <array>

using namespace std;

void printNumber(const array<int, 10> &my_array, bool print_even);

void printNumber(const array<int, 10> &my_array, bool print_even){
    for(auto element : my_array) {
        if(print_even && element % 2 == 0) cout << element;
        if(!print_even && element % 2 != 0) cout << element;
    }
    cout << endl;
}

bool isEven(const int& number) {
    if(number % 2 == 0) return true;
    return false;
}

bool isOdd(const int& number) {
    if(number % 2 != 0) return true;
    return false;
}

void purePrintNumber(const array<int, 10> &my_array, bool (*check_fcn)(const int&)){
    for(auto element : my_array) {
        if(check_fcn(element)) cout << element;
    }
    cout << endl;
}


int main(int argc, const char * argv[]) {
    array<int, 10> my_array{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    printNumber(my_array, true);
    printNumber(my_array, false);
    
    purePrintNumber(my_array, isOdd);
    purePrintNumber(my_array, isEven);

    
    return 0;
}
