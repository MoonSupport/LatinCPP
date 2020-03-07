#include<iostream>
#include<fstream>
#include<string>
using namespace std;
 
int main(void)
{
    ofstream writeFile;
    writeFile.open("test.txt");    //파일 열기(파일이 없으면 만들어짐)
 
    //1. char[] 문자열 쓰기
    char arr[11] = "BlockDMask";    //"BlockDMask\0"
    writeFile.write(arr, 10);
 
    //2. string 문자열 쓰기
    string str = " is handsome.";
    writeFile.write(str.c_str(), str.size());
    
    //str.c_str() : C++ string -> const char* 으로 변환해주는 함수
 
    writeFile.close();    //꼭 닫아주기
    return 0;
}
