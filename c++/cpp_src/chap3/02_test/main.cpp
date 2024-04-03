#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

class Date
{
private:
vector<string> split(string str, char Delimiter);
public:
    int year, month, day;
    string s;

    Date(int a, int b, int c);

    int getYear();
    int getMonth();
    int getDay();
    void show();

    Date(string s);
};

    vector<string> Date::split(string str, char Delimiter)
    {
    istringstream iss(str); // istringstream에 str을 담는다.
    string buffer;          // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼

    vector<string> result;

    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter))
    {
        result.push_back(buffer); // 절삭된 문자열을 vector에 저장
    }

    return result;
    }
Date::Date(int a, int b, int c)
{
    year = a;
    month = b;
    day = c;
}
Date::Date(string s)
{
    vector<string> result = split(s, '/'); // 여기부분 모르겠음!

    year = stoi(result[0]);
    month = stoi(result[1]);
    day = stoi(result[2]);

    show();
}
int Date::getYear() { return year; }
int Date::getMonth() { return month; }
int Date::getDay() { return day; }
void Date::show()
{
    cout << year << "년" << month << "월" << day << "일\n"; // 출력
}

int main()
{
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay() << endl;

    return 0;
}