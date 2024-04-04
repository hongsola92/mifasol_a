#include <iostream>
#include <string>
using namespace std;

int main(){
    // 스트링 생성
    string str; // 빈 문자열을 가진 스트링 객체 생성
    string address("서울시 성북구 삼선동 389");
    string copyAddress(address);    // address의 문장ㄹ을 복사한 ㅅ트링 객체 생성

    char text [] = {'L','O','V','E',' ','C','+','+','\0'};  // C-스트링
    string title(text); // "LOVE C++"문자열을 가진 스트링 객체 생성

    // 스트링 출력
    string str_Test(text, 4);

    
    cout << str << endl;    // 빈 스트링. 아무값도 출력안됨.
    cout << address << endl;
    cout << copyAddress << endl;
    cout << title << endl;
    cout << str_Test << endl; // string str_Test(text, 4); 4번째까지 나옴.
}
