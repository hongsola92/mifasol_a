#include <iostream>
using namespace std;

int main(void) {
    // 변수 선언
    string str;         // 입력 문자열을 저장할 변수
    int num = 0;        // a의 갯수를 누적 시킬 변수
    // 문자열 입력
    cout <<"<<문자열 입력>>";
    getline(cin, str, '\n');
    
    // 문자열 a 찾기
    // 1. 일반적인 방법
    // int len = str.length();
    // for(int i = 0; i< len; i++) {
    //     if(str[i] == 'a') num ++; 
    // }  
    // at을 사용하고 싶으면 if (str.at(i)== 'a')로 고친다.
    
    // 2. string의 find 함수를 이용하기
    int pos = 0;
    while (1)
    {
        pos = str.find('a', pos);
        cout << pos << endl;
        
        if(pos != -1)
        {
            num++;
            pos++;
        } 
        else{
            break;
        }       
    }
    cout << "문자 a는 " << num <<"개 있어용" << endl;
    return 0;
}
// Are you happy? I am so happy.