// call by reeference 참조에 의한 호출
#include <iostream>
#include <string>
using namespace std;

void combine(string &text1, string &text2, string &text3) {
    // 첫 번째 문자열과 두 번째 문자열을 결합하여 세 번째 문자열에 저장
    text3 = text1 + " " + text2;     // 지역변수
}



int main() 
{
    string text1("I love you"), text2("very much"); // call by vallue 값
    string text3;       // 비어 있는 문자열
    combine(text1, text2, text3);   // text1과 " ", 그리고 text2를 덧붙여 text3 만들기
    cout << text3 << endl;  // "I love you very much" 출력
}

