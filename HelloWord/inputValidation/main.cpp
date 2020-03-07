#include <iostream>
#include <string>
using namespace std;

int main() {
    string choice;

    do{
        cout << "Enter choice: ";
        getline(cin, choice);
    } while(choice != "A" && choice != "B" && choice != "C");

    cout << "Your choice is " << choice << '.' << endl;
}
