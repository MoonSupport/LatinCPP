#include <array>
#include <algorithm>

// 함수 객체로 구현
struct SumFunctor : public std::unary_function<int, void> {
    SumFunctor(int& number) : sum(number) {}
    
    void operator() (int& number) {
        sum += number;
    }
    
private:
    int& sum;
};

int main() {
    std::array<int, 5> numbers = { 1, 2, 3, 4, 5 };
    int sum = 0;
    
    std::for_each(numbers.begin(), numbers.end(), SumFunctor(sum));
    
    sum = 0;
    
    // lambda로 구현
    std::for_each(numbers.begin(), numbers.end(), [&sum](int& number) {
        sum += number;
    });
    
    return 0;
}
