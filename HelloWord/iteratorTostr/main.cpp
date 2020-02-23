//C++ string example3.
//BlockDMask.
#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string str1 = "BlockDMask";
    string str2 = "BlogBlogBlogBlog";
 
    cout << "str1 : " << str1 
    cout << "str2 : " << str2 << endl;
    cout << endl;
    
    //string substr example.
    cout << "str1.substr(5) : " << str1.substr(5) << endl;
    cout << "str1.substr(5,1) : " << str1.substr(5,1) << endl;
    
    //string replace example.
    cout << "str1.replace(5, 2, str2) : " << str1.replace(5, 2, str2) << endl;
 
    //string swap example.
    cout << endl;
    string str3 = "C++ example";
    cout << "str2 : " << str2 << endl;
    cout << "str3 : " << str3 << endl;
 
    cout << endl;
    cout << "swap(str2, str3)" << endl;
    cout << "str2 : " << str2 << endl;
    cout << "str3 : " << str3 << endl;
 
    cout << endl;
    system("pause");
    return 0;
}
