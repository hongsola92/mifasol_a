#include <iostream>

using namespace std;

// 클래스 선언
class TV{
public:
    bool on = false;
    int channel = 0;
    int valume = 0;

    TV();
    TV(int ch);

    void powerOn();
    void powerOff();
    void increaseChannel();
    void decreaseChannel();
    void increaseValume();
    void decreaseValume();
};

//클래스 구현
TV::TV(){   // 기본생성자
    on = false;
    channel = 0;
    valume = 0;
}
TV::TV(int ch){   // 채널값을 갖는 생성자
    on = false;
    channel = ch;
    valume = 0;
}

void TV::powerOn(){
    on = true;
}

void TV::powerOff(){
   on = false;
}


void TV::increaseChannel(){
    channel = channel +1;
}

void TV::decreaseChannel(){
    channel = channel +1;
}

void TV::increaseValume(){
    valume = valume +1;
}

void TV::decreaseValume(){
        valume = valume -1;
}

int main(void){
    // LG 객체는 생성시에 채널을 10으로 설정
    // SAMSUNG 객체는 생성시에 채널을 100으로 설정
    TV SAMSUNG(100), LG(10);

    cout <<"SAMSUNG의 채널은 " << SAMSUNG.channel << "입니더." << endl;
    cout <<"LG의 채널은" << LG.channel << "입니더." << endl;
    return 0;
}