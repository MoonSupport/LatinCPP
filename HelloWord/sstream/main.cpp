#include <set>
#include <vector>
#include <list>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>
 
using namespace std;
int main(){
    int num;
    string word1, word2;
    stringstream cast;
    cast << "helloworld hi? 12341234";
    cout<<cast.str()<<endl;
    
    cast >> word1;
    cast >> word2;
    cast >> num;
    cout<< word1 << " " << word2 << " " << num << endl;
    return 0;
}
