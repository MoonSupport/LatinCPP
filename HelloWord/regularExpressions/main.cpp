#include <stdio.h>
#include <string>
#include <regex>

int main()
{
    std::string s = "123 456 789";
    std::regex number("([0-9])([0-9])([0-9])");

    std::sregex_iterator it(s.begin(), s.end(), number);
    std::sregex_iterator end;

    while(it != end)
    {
        std::smatch m = *it;

        printf("%s\n", m.str(1).c_str());

        ++it;
    }

    return 0;
}
