#include <iostream>
#include <string>
using namespace std;

int main()
{
    string song("Falling in love with you");
    string elvis("Elvis Presley");
    string singer;

    cout << song + "부른 가수는말야";  //scanf or cout ==> printf
    cout << "(힌트 : 첫글자는" << elvis[0] << ")?";

    getline(cin,singer);
    if(singer == elvis)
        cout <<"딩동댕";
    else
        cout << "땡땡!" + elvis + "이예유" << endl;


}
