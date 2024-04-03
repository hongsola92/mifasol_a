#include <iostream>
#include <string>
using namespace std;

int main() {
    string song ("Falling in love with you");
    string elvis("Elvis Presley");
    string singer;

    cout << song +"를 부른 가수는?";
    cout << "(힌트 >> 첫글자" << elvis[0]  <<")?";
    //cout << song.length() << endl;      // 사이즈 알고싶을때 출력

    getline(cin, singer);
    if(singer == elvis)
        cout << "맞았음.";
    else
        cout << "틀림" + elvis + "임" << endl;
    return 0;
}