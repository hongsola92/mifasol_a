# hongsola
C/C++ database arduino raspberrypi Iot class
nn
---
## 024-02-22
---

- 개요.
- gitHub sign up.
- gitHub create repository.
- ubuntu hangul setting.
- VsCode install
- git install
```shell
sudo apt-get install git
git clone https://github.com/hongsola92/hongsola.git
```

- sql workbench install -windows
- MySQL DBMS install - windows
- sql workbench install - ubuntu
- MYSQL DBMS install - ubuntu
- vscode mysql extension install
- Chapter01 데이터베이스 개론
- Chapter03 SQL 기초
    - DB 만들어서 create database;
    - DB 테이블 만들기 3개 (book, order, customer)
    - DB 데이터 넣기 insert into ...,values (...);
    - 유저 만들어서 권한 설정 하기;
    
        -grant all pricileges on *.* to 'root'@'localhost' identified by '1234';
    - Windows cli 에서 testDB 생성하기

---
## 024-02-23
---

- mysql ubuntu 문제 해결
- user를 새로 만들어 권한 주어 봤지만 해결되지 않음.
- 권한 설정 및 user create 시
    - `ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY '0000' ;` 명령어 사용
    - new user 만들때  mysql_native_password 사용하도록 setup.
- ubunt myworkbench_code list, vscode_git connection.
    - add file:
        - create_database.sql
        - create_table.sql
        - insert_data.sql
        - create_user.sql
        - selec1.sql
    - 3자 내용 추가
        - SELECT 쓰는 방법.
        - WHERE 쓰는 방법.
        - ORDER BY 쓰는 방법.
- 관계 데이터 모델의 개념
    - relation 개념.
    - relation schema,instance.
    - relation 특징.
    - 관계 데이터 모델.
- integrity 제약조건
    - domain integrity constraint, entityintegrity constraint, referential integrity constraint.
    - 키(key)
        - super key.
        - candidate key.
        - primary key.
        - surrogate key.
        - alterate key.
        - foreign key.
- 관계대수(relational algebra)
    - 순수 관계연산, 일반 집합연산.
    - 순수 관계연산: selection, projection, join, division, rename
    - 일반 집합연산: union, intersection, difference, cartesia product

- Windows DBMS 를 우분투에서 연결.
    - 윈도우 DBMS 에 외부 IP 접근 가능한 user 생성.
    - 윈도우 방화벽에 3306 포트 열기.
    - 윈도우 DBMS에 임의의 data 넣고 우분투에서 확인.
- 우분투 dbms를 Windows 에서 연결.
    - 우분투 DBMS 에 외부 IP 접근 가능한 user 생성.
    - 우분투 방화벽에 전체 포트 열기.
    - 우분투 DBMS 에 임의의 데이터 넣고 윈도우에서 확인.

---
## 024-02-26
---

- 연산자
    - arithmetiv
        - +,-,*,/,% 
    - 증감연산자 (incremonter)
        - ++, --
    - 치환연산자
        - = 를 2개 쓸 수가 없음.
    - 비교연산자 (lompare)
        - <, >,  >=, <=, ==, !=
    - 논리연산자 (logical)
        - &&, ||, !
            - 0 &&__ (뒤에 뭐가 오든 결과값 0)
            - 0 ||__ (뒤에 뭐가 오든 결과값 1)
    - 항변환연산자 (type casting)
       - ex. (double)5 /9.0* (double)(fahr-32) 
            ' 5 앞에 (double)을 명시함으로서 int에서 double이 될 수 있음.
    - 비트연산자
        - &, |, ~, ^

---
## 024-02-27
---

- 제어 흐름
    - selection
        - if
        *asc코드 조건문 같은 경우 if에 해당. (조건이 있을때 실행)*
        - if-elses
        *양쪽이 나뉨. 두가지 조건*
        - else- if
        *선택사항이 여러개일 경우*
        - switch -case
    - loop
        - while
        - for
        - do-while
    
 *++i 에서 ++가 앞에 붙으면 증가 한 값,  
i++ 에서 뒤에 붙으면 증가 하기전의값*

---
## 024-02-28
---
- 중첩 for
 <구구단을 예시>
    - for (i = 2; <=9, ++i)   
            for(j = 1; j <=9; ++j)
    - 중첩 for문을 이용하여 *로 여러가지 만들어보기.
        - 순서증감,홀수증감,피라미드,X_wing.

---
## 024-02-29
---


- MySQL Workbench
    - DDM
        - example practice
            - WHERE, GROUP BY, HAVING ORDER BY
    - DDL
        - example practice
            - CREATE, ALTER, DROP
    - DCL
        - example practice
            - INSERT, UPDATE, DELETE
    - join
        -from A, B & WHERE PK= FK inner join.
        (PF = PK 일치 하면 옆에 붙여서 만들어지는 TABLE)
        *inner join = null값이 있는경우 -> delete*
        - 만약 from 뒤에 B, A로 순서가 바뀔경우 B의 기준으로 left join.
        full join = 전체 보이게함. (null포함)

    - UNION <집합> / UNION ALL <합집합>
        - SQL문의 결과는 TABLE에 나타남.
        - TABLE 간의 집합 연산을 이용하여 합집합,차집합,교집합을 구할 수 있음.
    
    - EXISTS <조건에 맞는 투플이 존재하면 결과에 포함>
        - 부속질의문의 어떤 행이 조건에 만족할 시 '참' / NOT EXISTS 모든 행이 조건에 만족하지 않을때만 '참'

- 프로그래머스 문제 풀어보기.

- NewBook Table 생성.
+ CREATE 문
+ ALTER 문 
    <생성된 테이블의 속성과 속성에 관한 제약을 변경, 기본키 및 외래키를 변경>
    -isbn을 integer로 변경.
+ DROP 문
 - MySQL 내장 함수
    - 단일행함수 (숫자,문자,날짜.시간,변환,정보,NULL)
        - 숫자
          - (ex) SELECT ABS(-78), ABS(+78);
          - SELECT ROUND(321.141592, -1);
          - SELECT CUSTID, ROUND(AVG(SALEPRICE), -2) FROM ORDERS GROUP BY CUSTID; ...
          - SELECT BOOKID, REPLACE(BOOKNAME, '야구', '농구') BOOKNAME, PUBLISHER, PRICE   FROM BOOK;
        - 문자
        - 날짜 
            - add_months, months_between, extract, last_day, next_day ,,,
    - 집계 함수
        -윈도 함수=분석 함수
    
---
## 024-03-04
---

- 배열초기화 (initialization)
    - int len = 100;
    [int len //선언] [len = 100; //치환]
        - ex) int nums[5] = {1,2,3,4,5};
        - int nums[ ] = {1,2,3,4,5};
        - int nums [5] = {1,2,3}; // {} 안을 초기화 list 라고 함. 모자란 만큼 '0'을 채워 줌. -> nums: 1,2,3,0,0
        - int nums[5] ={0} ->nums {0,0,0,0,0}
---

## 024-03-05

---



- 다차원 배열 (array of array)

    + 2차원 배열

- 포인터 (pointer) = 주소값을 저장하는 변수.

    - *뒤에 pointer : pointer가 가리키는 대상을 연산.

    - &뒤에 변수: 변수에 (시작) 주소값을 구해달라는 연산.



    ★*포인터는 반드시 대상을 가리키고, deference 해야 함.*★



    - int* vs char*

        - int 역참조 -> int / char 역참조 -> char

    - 다중 pointer <단일 포인터를 가리키는 용도>

    - 함수pointer

    - void * (포괄형(generic) pionter)

        - <순수하게 주소값을 저장하는 용도>

        - void* 역참조 불가.

    

    ★*(int*) p = 200; , *(double*)p = 2.718;과 같이 대상 포함★

    - pointer & array

        - pointer와 배열의 관계

        1. 배열 이름이 식에서 사용되면 첫번째 element에서 사용.

        2. pointer = 배열식 / 배열식 = pointer식으로 쓸 수 있음.

        + p = p+1; //+1은 다음 element를 가리킴.

        + *(p + 0) == nums[0]

        + *(p + 1) == nums[1]

        + *(nums + i) == nums[i]

        + *(p + i) == p [i]

---
## 024-03-06
---
- 함수에 인자로 포인트를 쓰는경우
    - 호출하는 쪽에 있는 변수값을 호출 당하는 쪽에서 바꿔줘야 할때 포인터를 씀.
    - 배열을 인자로 전달할 때 첫번째 엘리먼트 시작주소와 사이즈를 전달.
    
    ---
    ## 024-03-07
    ---
- 부속질의
    - 중첩질의_WHERE 부속질의
        - 단일 행,열 [비교] (=, >, <, >=, <=, <>,) 
        - 다중 행,열 [집합] (IN, NOT IN)
        - 다중 행,열 [존재] (EXISTS, NOT EXISTS)
        - 다중 행, 단일열 [한정] (ALL, SOME)
    - 스칼라 부속질의_SELECT 부속질의
    - 인라인 뷰_FROM 부속질의
- view
    - 생성
    - 수정
    - 삭제
- index
    - DB 물리적 저장
    - 인덱스와 B-tree
    - MySQL index
        - 클러스터 인덱스
        - 보조 인덱스제
        - MySQL 인덱스
    - index 생성
    - index 재구성과 삭제
- delete foreign key 실행.
- DB Programming 개념
    - SQL 전용 언어 사용하는 방법.
    - 일반 프로그래밍 언어에 SQL 삽입하여 사용
    - 웹 프로그래밍 언어에 SQL 삽입하여 사용
    - 4GL
- stored program (procedure로 구현하여 객체 형태로 사용)
    - 저장 루틴, 트리거,이벤트로 구성
        - 저장루틴은 프로시저, 함수로 나뉘어짐
    - trigger
        - before,after
    - function (사용자 정의 함수)
- procedure 실행


---
## 024-03-08
---
- CMake 설치 `sudo apt-get install cmake`
- CMake 실습
    - CMakeLists.txt
    - make
- vscode
    - 디버깅
- flaskweb 설치 `sudo apt-get install python3-flask`, `pip install flask`
- flaskweb 실습 
    - app.py 작성 > python app.py > 브라우저 localhost:5000 접속
- 데이터모델링
    - 개념적 모델링
    - 논리적 모델링
    - 물리적 모델링
- ER
    - 개체, 개체타입
    - 속성
    - 관계, 관계타입
    - 약한 개체타입과 식별자
    - IE표기법자

- 이상현상
    - 삽입 시 이상현상
    - 삭제 시 이상현상
    - 수정 시 이상현상

- 함수 종속성 (의존성이 강함)
- 정규화
    - 제 1정규형
        - 모든 속성값이 원자값
    - 제 2정규형
        - 제 1정규형 + 완전함수종속
    - 제 3정규형
        - 제 2정규형 + 기본키가 아닌 속성이 기본키에 비이행적으로 종속어
    - BCNF
        - 함수 종속성에서 모든 결정자가 후보키
- 트랜잭션(transaction)
    - 원자성(Atomicity)
    - 일관성(Consistency)
    - 고립성(Isolation)
    - 지속성(Durability)
- 동시성 제어

---
## 024-03-15
---
- make_String 
    - main.c 파일 생성
    - myString.c , myString.h, Makefile 생성성

---
## 024-03-19
---

- c_game_project start
    - git repository 생성
    - gitignore 생성
    - doxygen setting
        - sudo apt install doxygen graphviz
        - sudo apt install doxygen-gui
        - sudo apt install qt5
        - unset GTK_PATH
- cmake 배포
    - install 명령어 사용, cpack setting
---
### C++
---
## 024-03-26
---
    - linking (object file 생성되어도 바로 실행될 수 없음.)
    - #include <iostream>
        - 전처리기에 대한 지시문
    - 화면출력
        - cout 객체
        - << 연산자
        - 여러 개의 << 연산자로 한 문장에 여러 data 출력
        - cout과 << 연산자 활용
    - namespace & std
        - std:: 생략과 using지시어
    - 키 입력 받기.
        - cin과 >> 연산자를 이용한 키 입력.
        - Enter 키 칠 때 변수에 키 값 전달.
        - 실행문 중간에 변수 선언.
    - 키보드 문자열 입력.
        - C-스트링 : 널 문자('\0' 혹은 0)로 끝나는 char 배열

---
## 024-04-01
---
- https://github.com/hongsola92/mifasol_a/blob/main/c%2B%2B/chap3/ex3_1.cpp

---
## 024-04-03
---
- https://github.com/hongsola92/mifasol_a/tree/main/c%2B%2B/cpp_src/chap3/EXP

---
## 024-04-04
---
- 객체 배열 선언 및 활용
- 배열의 동적 할당 및 반환
    - https://github.com/hongsola92/mifasol_a/blob/main/c%2B%2B/cpp_src/chap4/ex4_2/main.cpp
- 문자열 다루기
    - 치환, 비교, 연결, 삽입, 길이, 삭제, 스트링, 검색...

---
## 024-04-05
---
- 인자 전달 방식 >> 값에 의한 호출(call by value), 주소에 의한 호출(call by address)
- 객체 치환 및 객체 리턴
- 참조와 함수
    - 참조 : &를 사용 /  선언과 정의를 동시에 해줘야 한다. ⇒ Circle &refc =    circle;
    ex) int &refn = n에 대한 별명이 된다. ⇒ refn과 n 은 동일한 변수가 됨. 

        ㅇ 포인터와는 달리 메모리 상에 존재하지 않을 수도 있다. (항상은x)
        ㅇ 함수인자를 참조자로 전달받게 되면, 메모리가 할당 되게 된다.
        ㅇ  NULL이 허용되지 않는다.
        ⇒ 따라서 매개변수에 NULL포인터를 넘겨주거나 리턴값으로 NULL포인터를 반환해야 하는 경우는 포인터를 사용해야한다.
---
## 024-04-08
---
- 복사 생성자
    - 얕은 복사, 깊은 복사 예제 실습을 통하여 차이점 확인.
    - 디폴트 복사 생성자는 얇은 복사를 실행하도록 만들어진 코드 ==> 깊은 복사 하기 위해선 직접 만들기

---
## 024-04-09
___
- 함수 중복과 static멤버
    - big()함수, sum()함수, 생성자 함수 중복  // 소멸자는 중복 x
- 디폴트 매개 변수를 가진 함수 선언 및 호출 예제 작성.
- 형 변환 모호성
    ㅇ 컴파일러는 작은타입을 큰 타입으로 자동 형 변환
    ==> char -> int ->long -> float-> double
- static 멤버함수
    - this 사용 불가.
    - 실습예제로 static 멤버함수 만들어보기.
    ---
    ## 024-04-11
    ---
    - 프렌드와 연산자 중복
        - friend 함수
            - class내에 friend 키워드로 선언된 외부 함수를 'friend funcion'라고 부른다.
            - class 멤버 함수로는 적합하지 않지만, 클래스의 private, protected 멤버를 접근해야하는 특별한 경우에 사용.
            - main문도 friend 함수 가능.
        - 연산자 중복
            - C++ 언어에 본래 있는 연산자만 중복 가능.
            - 피연산자의 타입이 다른 연산을 새로 정의하는 것.
            - 함수를 통해 이루어짐.
            - `반드시 class와 관계를 가짐.`
            - 연산자 중복으로 피연산자의 개수를 바꿀 수 없다.
            - 모든 연산자가 중복 가능한것은 아님!
    - 이항 연산자 중복
    - 다항 연산자 중복
        - 전위 ++ 연산자 중복
        - 후위 ++ 연산자 중복
---
## 024-04-12
---
- 상속
    - 상속을 해주는쪽 : 기본 클래스
    - 상속받는 클래스 : 파생 클래스
    - 다중상속 : C++에서는 허용.
    - 상속과 객체 포인터
        - up-casting : 파생클래스의 객체를 기본 클래스의 객체처럼 다룰 수 있게 함.
        - down-casting : 명시적으로 타입 변환을 지정해야 함.
    - 상속의 종류
        - public 상속, protected 상속, private 상속
    - 다중 상속
    - 가상 상속
    ---
    ## 024-04-15
    ---
    **avr**
- 인터럽트
    - 인터럽트 처리
    - 발생조건
    - 중첩
        - 중첩된 인터럽트를 허용하지 않음.
    - 외부 인터럽트.
- 8비트 타이머,카운터.
    - 타이머/ 카운터 구조 알아보기.

- 통신
    - 직렬통신
        - 단방향 통신
        - 양방향 통신
            - 반이중 방식
            - 전이중 방식 : 데이터를 보내면서 받을 수 있음. 
    - 병렬통신
---
## 024-04-17
---
- AVR 통해 PuTTY 연결하여 `Hello! World!!` 출력해보기.
- A/D 컨버터
  - 분해능이 높을수록 좋음 -> A/D 컨버터 
시간이 오래 걸림
  - 샘플링타임 : 시간을 촘촘하게 계산하여 세세하게 알 수 있음. 단, 데이터 양과 샘플링 시간이 많아짐.
  - ADC0 - ADC7 까지 8채널의 멀티 플렉스된 단일 입력.
---
## 024-04-18
---
### 소켓 프로그래밍
- "Hello world!" 서버 프로그램의 구현
- 전화 거는 소켓의 구현
- 터미널에 "ifconfig" 입력 => '에러: net-ifconfig 패키지를 찾을 수 없습니다.'
    - 해결: sudo apt install net-tools 입력하여 해결함.
- 파일에 저장된 데이터 읽기
    - 읽기 권한 얻기 ==>`sudo chmod 777 data.txt`
- 터미네이터 설치
- 임베디드 장비 초기 설정하기.
---
## 024-04-23
---
- 연결지향형 소켓 (TCP)
    - 중간에 데이터가 소멸되지 않고 목적지로 전송.
    - 전송 순서대로 데이터가 수신됨.
    - 전송되는 데이터의 경계가 존재하지 않음.
    - 소켓 대 소켓의 연결은 반드시 1:1 이어야 함.
- 비 연결지향형 소켓 (UDP)
    - 전송된 데이터는 손실의 우려가 있고, 파손의 우려가 있음.
    - 전송되는 데이터의 경계가 존재.
    - 한번에 전송할 수 있는 데이터의 크기가 제한됨.

- 소켓에 할당되는 IP주소와 PORT번호
    - IP주소는 네트워크 주소와 호스트 주소로 나뉨. (A,B,C,D,E 클래스로 분류)
        - 클래스 A의 첫번째 바이트 범위 : 0이상 127이하  ==> 첫번째 비트는 항상 '0'으로 시작
        - 클래스 B의 첫번째 바이트 범위 : 128이상 191이하 ==> 첫 두 비트는 항상 '10'으로 시작
        - 클래스 C의 첫번째 바이트 범위 : 192이상 223이하 ==> 첫 세 비트는 항상 '110'으로 시작
    - 소켓이 여러개가 열려있기 때문에 PORT번호가 필요.

- IP주소와 도메인 이름 사이의 변환.
    - 도메인 이름을 이용하여 IP주소 얻어오기.
        - #include <netdb.h>
        struct hostnet * gethostbyname(const char * hstname); 함수를 이용하여 문자열 형태의 도메인 이름으로부터 IP주소정보 얻을 수 있음.

---
## 024-05-03
---
**openCV**
- OpenCV 설치
    - sudo apt install libopencv-dev python3-opencv
    - cmake 설정
        - glov file 적용
    - 영상처리 와 인식 개념
        - 영상 파일 형식
            - BMP, JPG, GIF, PNG
    - OpenCV 프로그램 주요 함수
        - imread()
        - namedWindow()
        - imshow()
        - waitKey() : 키보드 아스키코드 char값(리턴)
    - 기본 자료형 클래스
        - Point_class가
        - Size_class
        - Rect_class
        - RotatedRect_class
        - String_class
        - Mat_class
            - OpenCV 에서 가장 기본적이고 중요한 데이터 구조, 이미지나 행렬을 표현하는데 사용.
    - 영상 입출력 (imread, imshow, imwrite)
    - 동영상 입출력 (VideoCapture, VideoWriter)
        - https://github.com/hongsola92/mifasol_a/blob/ed10bcee562f0a5d1222fffabb5df63de2d4c7bc/openCV/chap04/video.cpp
    - OpenCV 활용하여 직선 그려보기.
        - https://github.com/hongsola92/mifasol_a/blob/ed10bcee562f0a5d1222fffabb5df63de2d4c7bc/openCV/chap04/line.cpp
---
## 024-05-07
---
- 영상처리 저수준 -> 밝기 대비
- 영상인식 고수준 -> 해석 -> 의미있는 정보

- 기초클래스
    - _Point = x , y / 다양한 연산도 가능.
    - _Size = width, height
    - _Rect = x,y,width, height
    - _Mat = <T> 2차원 배열 [y][x]
- Inputarray / Outputarray
    - '&' 참조가 들어감. 다양한 img 객체를 받을 수 있음.
- include <string > -> std 가들어가있으나 안써도 opencv 'cv' 안에 String이 들어가 있음.

- 기본기능
    - cap = VideoCapture
- text
    - putText
        - https://github.com/hongsola92/mifasol_a/blob/1ee2b826ccea8608c353b2344323bf2926503676/openCV/chap04/freeTypefont.cpp
- mouse
    - mouse callback 함수 사용
        - https://github.com/hongsola92/mifasol_a/blob/1ee2b826ccea8608c353b2344323bf2926503676/openCV/chap04/mouse.cpp
- keyboard
    - 키보드 입력 받기
        - https://github.com/hongsola92/mifasol_a/blob/1ee2b826ccea8608c353b2344323bf2926503676/openCV/chap04/keyboard2.cpp
- trackbar
    - https://github.com/hongsola92/mifasol_a/blob/1ee2b826ccea8608c353b2344323bf2926503676/openCV/chap04/trackbar.cpp
- FileStorage
    - https://github.com/hongsola92/mifasol_a/blob/1ee2b826ccea8608c353b2344323bf2926503676/openCV/chap04/storageRead.cpp
- 마스크 연산
    - https://github.com/hongsola92/mifasol_a/blob/1ee2b826ccea8608c353b2344323bf2926503676/openCV/chap04/maskSetTo.cpp
- 영상 밝기 조절
    - https://github.com/hongsola92/mifasol_a/blob/1ee2b826ccea8608c353b2344323bf2926503676/openCV/chap05/brightness.cpp

---
## 024-05-08
---
- 영상 밝기 조절
    - 트랙바 적용

- 영상 대비 조절
    - 히스토그램 스트레칭, 히스토그램 평활화
- 영상의 산술 연산
    - add, addWighted, subtract, absdiff
- 블러링
    - blur, GaussianBlur, medianBlur, bilateralFilter
- 샤프닝
- 노이즈 생성
    - 가우시안 노이즈 / 소금 -후추 노이즈 미디안 필터로 없애기
        - https://github.com/hongsola92/mifasol_a/blob/9ffadea5cc9cbb2e67a8c9c280aded1066be55f4/openCV/chap07/noise.cpp
- 기하학적 변환 affine, perspective
    - 평행 이동, 전단 변환, 회전 변환, 크기 변환
    - warpAffine, warpPerspective
    - getRotationMatrix2D, getAffineTransform
        - https://github.com/hongsola92/mifasol_a/tree/9ffadea5cc9cbb2e67a8c9c280aded1066be55f4/openCV/chap08
- 엣지
    - 캐니엣지
---
## 024-05-09
---
- 에지 검출
    - 픽셀변화가 확실한 부분 - edges->line->conner->keypoint
    (객체 인식 방법, 속도도 꽤 빠른편)
- 허프 변환
    - 직선 검출
    - 원 검출
        - 세 개의 원소 (x,y,r)로 표현. x,y = 원의 중심 좌표 / r = 원의 반지름.
- 이진화
    - 영상의 픽셀 값을 0 또는 255(1)로 만드는 연산.
    - 모폴로지
    - 이진 영상의 침식 연산
    - 이진 영상의 팽창 연산
        - 객체 외곽을 확대시키는 연산.
    - 이진 영상의 열기와 닫기.
- 레이블링
    - 객체 구역을 영역 단위로 분석.
    - 객체 픽셀에 고유한 번호를 지정하는 작업(레이블맵).
    - 이진 영상에서 수행.
- 외곽선 검출
- 템플릿 매칭
- 캐스케이드 분류기와 얼굴 검출
- HOG 알고리즘과 보행자 검출
- 해리스 코너 검출
- FAST 코너 검출 (FAST() 함수를 이용하여 검출)
    - 비최대 억제 수행으로 로컬맥시말을 검출
--------------------
## 024-05-21
## [Python]  https://zrr.kr/mas2
-----------------------------------
- 파이썬 특징
    - 동적 타이핑 언어
    - 플랫폼 독립적인 언어
    - 객체 지향 언어
    - 인터프리터 언어

- `python3 -V` 버전 검색해보기.
- 가상환경
    - 가상환경 만들기
        1. conda를 사용하여 만드는 방법.
        2. virtualenv + pip를 사용하여 만드는 방법.
- miniconda 실습
    - 리눅스 안에서 miniconda설치
        - `wget https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh`
        - `sh Miniconda3-latest-Linux-x86_64.sh`
    - 쉘 재실행
        - conda 명령어 진행
            - 생성: conda create mynev
            - 가상환경 명령어: conda create -n my_project python=3.10
    - 가상환경 실행
        - `conda activate my_project` 명령어 입력
            - `which python` => 리눅스의 경우 which로 위치 찾기. 윈도우일 경우 
            'where'사용
- 자료형과 기본 연산
    - 기본자료형
        - 정수형, 실수형, 문자형,불린형
    - 간단한 연산
        - 사칙연산,제곱승,나눗셈의 몫과 나머지,증가 연산과 감소연산
- 화면 입출력
    - input()함수
- 리스트의 이해
    - 배열 int[]
    - vector <type>
        - 어느타입이든 집어 넣을 수 있음. [A type, B type, ...]
- 리스트 추가 및 삭제
    - append()함수
    - extend()함수  ==> 기존 리스트에 그대로 새로운 리스트 추가.
    - insert()함수  ==> 0번째 인덱스 값에 새로운 값을 추가.
    - remove()함수
    - 인덱스의 재할당과 삭제
- 패킹과 언패킹
- 이차원 리스트

- 조건문과 반복문
    - 조건문
        - if-else문
        - 조건의 판단
        - if-elif-else문

## 024-05-22
- 반복문
    - for문 : 반복 범위 지정하여 반복 수행.
    - while문
    - 반복문의 제어 : 파이썬에서는 필요에 따라 중간에 반복을 종료하거나 실행중인 반복문을 건너뛸 수 있음.

- range 문법의 기본 구조
    - ==>  `for 변수 in range(시작번호, 마지막번호, 증가값)`

- 프로그래밍에서의 오류는 버그라 하고, 오류를 수정하는 과정을 디버그 라고 한다.
    - ++ 코드에서 오류를 만났을때 잘못을 찾아내고 고치는 것 ==> 디버깅

- 문법적 오류 : 문법 자체의 오류
- 논리적 오류 : 문법에는 문제가 없으나 원하는 대로 실행되지 않음

- 함수
    - 지역 변수
    - 전역 변수 : 파이썬에서 제공하는 global이라는 키워드를 사용해야 함.

- 인수
    - 키워드 인수 : 함수의 인터페이스에서 지정한 변수명을 사용하여 함수의 인수를 지정하는 방법.
    - 디폴트 인수 : 별도의 인수값이 입력되지 않을 때 인터페이스 선언에서 지정한 초깃값을 사용하는 방법.
    - 가변 인수 : 함수의 인터페이스에서 지정한 변수 이외의 추가 변수를 함수에 입력할 수 있도록 지원하는 방법.
    - 키워드 가변 인수 : 매개변수의 이름을 따로 지정하지 않고 입력하는 방법.

- PEP 8  ==> 파이썬 개발자가 직접 정한 코딩 규칙

- 제너레이터
    - 함수 내부 yield 키워드를사용하면 해당 함수는 제너레이터 함수가 됨.
- 데코레이터
- 문자열
    - 문자열함수, 단어 카운팅, 문자열 서식
- 코딩 테스트 연습(프로그래머스-파이썬3)

## 024-05-23
### [복습]
- 함수
    - 매개변수 종류
        - 위치 매개변수
        - 키워드 매개변수: 키워드와 밸류를 묶어 넘김.
        - 디폴트 매개변수
        - 가변 매개변수: 튜플의 형태로 넘어 감.
    - 함수 리턴 값: 여러개를 리턴 하면 튜플로 전달.
- 문자열
    - 파이썬에서 문자열은 클래스의 객체로서 시퀀스 자료형이다.리
- 문자의 포맷팅
    - % 연산자
    - format 함수
    - f-string
    - 패딩처리
----------------------------------
- 자료구조
    - 자료구조의 이해
        - 파이썬에서의 자료구조
    - 스택과 큐
        - 스택
        - 큐
    - 튜플과 세트
        - 튜플: 값을 변경하는 것이 불가능한 리스트.
        - 세트: 값을 순서 없이 저장하되 중복을 불허하는 자료형.
    - 딕셔너리
        - 파이썬에서의 딕셔너리
        - 딕셔너리의 함수
            - {}를 사용하여 키와 값을 쌍으로 구성하면 된다.
        - 메소드
            - keys(), values(), items()
                - ==> 키, 값, 키+값

    - collections 모듈
        - deque: 스택과 큐를 모두 지원하는 모듈이다. 리스트와 비슷한 형식으로 데이터를 저장해야한다.
            - 호출코드 >> from collections import deque 
        - OrdereDict: 딕셔너리 파일을 저장하면 키는 저장 순서와 상관없이 저장된다.
            - 호출코드 >> from collections import OrderedDict
        - defaultdict: 딕셔너리의 변수를 생성할 때 키에 기본값을 지정하는 방법이다.
            - 호출코드 >> from collections import defaultdict
        - Counter: 리스트나 문자열과 같은 시퀀스 자료형에 저장된 요소 중 같은 값이 몇 개 있는지 그 개수를 반환.
            - 호출코드 >> from collections import Counter
        - namedtuple 모듈: c언어에서는 struct라는 이름으로 사용되고 있음. 튜플의 형태로 데이터 구조체를 저장하는 방법.
            - 호출코드 >> from collections import namedtuple

    - Lab: 텍스트 마이닝 프로그램
- 맵리듀스
    - map()함수
        - 제너레이터의 사용
        - 리스트 컴프리헨션과의 비교
        - 한개 이상의 시퀀스 자료형 데이터의 처리
        - 필터링 기능
    - reduce()함수
- 객체 지향 프로그래밍의 이해
    - 클래스 구현
        - self는 자기자신을 뜻하는 객체.
    - 노트북 프로그램 만들기
        - Note 클래스
        - Notebook 클래스
    
- 파이썬과 c++에서의 class 차이
    - 접근 제한자
        - 파이썬: 접근 제한자가 없음. 하지만 암묵적으로 _ (protected), __ (private) 사용.
        - C++: 명시적 접근 제한자 (public, protected, private).
    - 상속 및 다중 상속
        - 파이썬: 다중 상속을 지원.
        - c++: 다중 상속을 지원하지만 복잡성과 다이아몬드 문제(충돌)를 해결하기 위해 가상 상속을 사용할 수 있음.
    - 생성자 및 소멸자
        - 파이썬: __init__ 메서드로 생성자 정의, __del__ 메서드로 소멸자 정의.
        - C++: 클래스명과 동일한 함수로 생성자 정의, `~클래스명()`으로 소멸자 정의.
    - 메모리 관리
        - 파이썬: 가비지 컬렉션(Garbage Collection) 자동 메모리 관리.
        - C++: 사용자가 명시적으로 메모리 관리 (new, delete).
    - 다형성 및 메서드 오버라이딩
        - 파이썬: 메서드 오버라이딩을 자유롭게 지원.
        - C++: 메서드 오버라이딩을 위해 `virtual` 키워드 사용.
    - 추상 클래스 및 인터페이스
        - 파이썬: ABC(Abstract Base Class) 모듈 사용.
        - C++: 순수 가상 함수(pure virtual function) 사용.
    - 기타
        - 파이썬: 동적 타이핑(dynamic typing), 메타클래스 지원.
        - C++: 정적 타이핑(static typing), 템플릿(templates)기능 제공.
- 파이썬으로 원을 만들어 움직이는 게임 만들어보기.
    - `https://github.com/hongsola92/mifasol_a/blob/7070de8126f14e1230aa8c6739fb8c10d9922113/pygame/simpleGame.py`

## 024-05-24
### [복습]
- 자료구조
    - list: []로 정의함.
    - dict
    - set
    - +tuple: list와 유사하나, 자료를 튜플자체에서 바꿀 수 없음.
- 집합자료: set()의 형태.
    - 원소 추가하는거 add()
    - 제거하는건 remove()
    - 연산자
        - 합집합 | 
        - 교집합 &  
        - 차집합 -
- dict() 딕션너리
    - key,value ==> `(( ) [key])` 여기서 key값이 없으면 error!
    - key는 중복이 되지 않음.
    - value는 중복이 되어도 상관없다.
    - key는 변경이 되지 않는다.
    - value는 변경이 가능하다.
- 파이썬 스타일 코드(화이덴틱, 파이써닉)
    - split, join ==> string 클래스와 관련된 메소드.
    - list comprehension
        - [i for i in range(10) if ~]
        - [i if ~ else ~ for i in range(10)]

- 객체 지향 프로그래밍 
    - 클래스와 객체
        - 클래스는 객체를 만들기 위한 틀
        - 객체는 클래스를 이용하여 만들어진 것
    - 클래스 선언
        - class 클래스이름:
        - init 함수
        - self 키워드
        - 노트북 프로그램 만들기
        - 상속
        - 다형성
            - 인터페이스
        - 가시성
            - __변수 : private
            - @property
- 모듈과 패키지
    - 모듈: 하나하나 연결해 어떤 목적을 가진 프로그램을 만들기 위한 작은 프로그램.
        - 인터페이스: 함수에서 매개변수를 입력하는 약속.
    - 패키지: 모듈의 묶음.
    
------------------------------
# 024-05-27
### [데이터 과학을 위한 통계]
------------------------------
- 탐색적 데이터 분석(EDA)
    - 정형화된 데이터의 요소
        - 수치형 데이터
            - 연속형 데이터: 일정 범위 안에서 어떤 값이든 취할 수 있는 데이터
            - 아산 데이터: 횟수와 같은 정수 값만 취할 수 있는 데이터
        - 범주형 데이터
            - 이진 데이터: 값이 2개인 데이터(참/거짓, 남/여, 0/1)
            - 순서형 데이터: 수치 사이에 순위가 있는 데이터(성적,평점 등)
    - 테이블 데이터
        - 각 레코드(사건)를 나타내는 행과,피처(변수)를 나타내는 열로 이루어진 이차원 행렬을 의미하는 일반적인 용어.
            - 레코드: 일반적으로 테이블의 각 행은 하나의 레코드를 의미.(데이터)
            - 피처: 일반적으로 테이브릐 각 열이 하나의피처를 의미.(sql 컬럼과 같은것)
        - 데이터 프레임과 인덱스
        - 테이블 형식이 아닌 데이터 구조
            - 객체를 표현할 때는, 어떤 객체와 그것의 공간 좌표가 데이터의 중심이 됨.
            - 필드 정보는 공간을 나타내는 작은 단위들과 적당한 측정 기준값에 중점을 둠.
    - 위치 추정
        - 통계학자들은 평균을 대체할 만한 다른값들을 개발해 냈음.(가중평균, 중간값, 백분위수, 가중 중간값, 절사평균)
        - 가중평균을 사용하는 두가지 이유
            - 중요성 반영: 각 요소의 중요도나 비중을 고려하여 평균을 계산
            - 왜곡 방지: 데이터의 신뢰도나 대표성을 반영하여 전체 결과를 정확하게 만듦
    - 변이 추정
    - 데이터 분포 탐색하기
    - 이진 데이터오 범주 데이터 탐색하기
        - 최빈값
        - 기댓값
        - 확률
    - 상관관계
        - 산점도
    - 두 개 이상의 변수 탐색하기 
    -----
    ### [파이썬 머신러닝]
    https://github.com/hongsola92/mifasol_a/tree/95b295f8b3d42c592a5d34ed043cf386046299a3/pythonData/numpyTest
    
- 넘파이: 파이썬의 고성능 과학 계산용 라이브러리
    - 특징: 1. 빠른 속도와 효율적인 메모리 사용.  2. 반복문 사용하지 않음.  3. 다양한 함수 제공.  4. 다른 언어와 통합 사용 가능.
    - numpy 모듈 설치
        - `conda install numpy`
    > import numpy as up ····> 넘파이 호출
    >>test_array = np.array([1,4,5,8],float) ····> 데이터 타입과 생성할 데이터 입력.
    - 배열의 생성
    - 인덱싱과 슬라이싱
    - 배열 생성 함수
       - arange
       - ones, zeros, empty
       - ones_like, zeros_like, empty_like
       - identity, eye, diag
    - 통계 분석 함수
        - uniform 함수: 균등 분포 `'np.random.uniform(시작값,끝값,데이터개수)'`의 형식.
        - normal 함수: `'np.random.normal(평균값,분산, 데이터개수)'`의 형식.
- 넘파이 배열 연산
    - 연산 함수
    - 연결 함수
    - 사칙연산 함수
        - 행렬과 행렬 간, 벡터와 벡터 간의 연산에서 +.- 연산이 가능.
    - 브로드 캐스팅: 증식을 하여 앞쪽에 맞게 늘어나서 계산.
        - 안되는 경우도 있음 ==> ex) (2x3) (2x4) 와 같은 경우.
        
## 024-05-28
- 넘파이 배열 연산 복습
- 판다스
    - 데이터를 다루기 위해 고성능 배열 계산 라이브러리인 넘파이를 기본적으로 사용.
    - 시리즈 객체 : 피쳐 벡터와 같은 개념으로, 하나의 피쳐 데이터를 포함하는 형태로 시리즈 객체가 다루어짐.
    - 데이터프레임 객체 : 데이터 테이블 전체를 지칭하는 객체로, 여러 개의 시리즈 묶음으로 구성 되어 있음.
    - 데이터 추출
        - 열 이름 사용: 필요한 열 이름을 list 형태로 넣어서 호출.
        - 행 번호 사용: 인덱스 번호를 사용하여 데이터 호출. 기존 리스트나 넘파이 배열의 인덱싱과 동일.
        - 행과 열 모두 사용: 앞부분에는 열의 이름을 리스트, 뒷부분에는 인덱스 번호를 붙여주는 방식.
        - loc,iloc 함수 사용: loc함수는 데이터의 인덱스 이름과 열 이름을 가지고 데이터를 호출, iloc 함수는 인덱스 번호로만 데이터 호출.
        - drop 함수 사용: drop함수를 사용하여 특정 열이나 행을 삭제할 수 있음.
    - 그룹별 집계(groupby)
        - 과정: 분할(split)->적용(apply)->결합(combine)
    - 그룹화된 상태
        - 집계(aggregation): 요약된 통계 정보 추출
        - 변환(transformation): 해당 정보를 변환
        - 필터(filter): 특정 정보를 제거하여 보여주는 필터링
    - 병합(merge)
        - 두개의 데이터를 특정한 기준을 가지고 하나로 통합하는 작업.
        - 종류
            - 내부조인(inner join): 교집합의 개념으로 병합
            - 완전조인(full join): 합집합의　　　"
            - 왼쪽조인(left join): 왼쪽 테이블을 기준으로 데이터 병합
            - 오른쪽조인(right join): 오른쪽　　　　　"
    - 연결(concatenate)
        - 두 테이블을 그대로 붙이는 방법. 데이터의 스키마가 동일한 데이터끼리 그대로 연결해서 사용하는 경우 연결을 사용함.
        - 연결 함수: concat 함수와 append함수

- 데이터 시각화
    - 맷플롯립: (`import matplotlib.pyplot as plt`) 모듈 호출.
        - 기본 구조: 맷플롯립을 이용할 때 가장 기본이 되는 구조는 파이폴롯 위에 그림 객체를 올리고 그 위에 그래프를 그리기 위한 촉을 올리는 식.
        - 그래프 꾸미기: 색상,선의 형태, 제목, 범례등을 변형하여 다양한 형태로 그래프를 꾸밀 수 있음.
        - 그래프의 종류: 산점도, 막대그래프, 누적 막대그래프, 히스토그램, 상자그림
    - 사본: (`import seaborn as sns`) 모듈 호출.
        - 사용하는 그래프: 회귀 그래프, 산점도, 비교 그래프, 막대그래프
        - 사전 정의된 그래프: 바이올린 플롯, 스웜플롯, 패싯그리드
    - 플롯리
        - 비즈니스 인텔리전스 대시보드로의 역할기을 하기 위해 개발된 도구. 인터랙션 그래프를 지원.
- 데이터 전처리: 머신러닝 모델에 훈련 데이터를 입력하기 전에 가공하는 단계.
    - 결측치 처리하기: 드롭과 채우기

## 024-05-29
### [데이터 과학을 위한 통계]
- 데이터와 표본분포
    - 임의표본추출: 대상이 되는 모집단 내의 선택가능한 원소들을 무작위로 추출하는 고정(모든 원소는 동일한 확률로 뽑힌다.) == > 그 결과로 얻은 샘플을  **단순임의표본** 이라고 한다.
    - 선택편향: 관측 데이터를 선택하는 방식 때문에 생기는 편향.
        - 목푯값 섞기: 성능을 검증하기 위해 둘 이상의 홀드아웃 세트를 이용.
        - 평균으로의 회귀
    - 데이터 스누핑: 뭔가 흥미로운 것을 찾아 광범위하게 데이터를 살피는 것.

- 통계학에서의 표본분포
    - 중심극한정리 - *https://zrr.kr/2sbE*
    - 표준오차: 표본 값들의 표준편차 s와 표본크기 n을 기반으로 한 통계량을 이용하여 추정 가능.
- 부트스트랩: 현재 있는 표본에서 추가적으로 표본을 복원 추출하고 각 표본에 대한 통계량과 모델을 다시 계산하는 것. - *https://zrr.kr/u070*

- 정규분포: 정규화 -> 평균: 0 , 분산= 정규 분포 분산.
- 표준정규분포  - *https://zrr.kr/CYI0*
- 긴 꼬리 분포  - *https://zrr.kr/QIfN*
- 이항분포, 푸아송 분포, 지수분포  - *https://zrr.kr/RBqF*
- 카이제곱분포:
    1) 주로 카이제곱 검정에서 쓰임.
    2) 관측값과 기대값의 차이를 검증하는 데 사용.
    3) 자유도에 따라 형태가 달라짐.
    4) 왼쪽으로 긴 꼬리를 가지고 있어서 분산이 높은 값을 더 자주 발생시킴.
    5) 주로 독립성 검정이나 변수 간 관계를 이해하는 데 활용.
- Orange 설치

## 024-05-30
- 통계적 실험과 유의성검정
    - A/B 검정
    - 가설검정
        - 귀무가설 : 우연 때문이라는 가설
        - 대립가설 : 귀무가설과의 대조
        - 일원검정 : 한 방향으로만 우연히 일어날 확률을 계산하는 가설검정
        - 이원검정: 양방향으로 우연히 일어날 확률을 계산하는 가설검정
    
    - 재표본추출 (부투스트랩,순열검정 이라는 두 가지 주요 유형이 있음.)
        - 샘플에서 여러번 추출 하는 것. 
        - 부트스트랩
        - 순열검정: 두 개 이상의 표본을 함께 결합하여 관측값들을 무작위로 재표본으로 추출하는 과정.
        - 웹 점착성 - *https://zrr.kr/bNQT*
    - 통계적 유의성과 P값 - *https://zrr.kr/e8Qi*즘
    - t검정 - *https://zrr.kr/f9sB*
    - 다중 검정
    - 자유도 
    - 분산분석 - *https://zrr.kr/qkN7*
        - F 통계량 - *https://zrr.kr/JP7K*
    - 카이제곱검정 - *https://zrr.kr/LHL0*
    - 검정력과 표본크기
        - 효과 크기 - *https://zrr.kr/TkAY*
- 회귀와 예측
    - 단순선형회귀 - *https://zrr.kr/pZdn*
        - 회귀식
        - 적합값과 잔차 - *https://zrr.kr/5zjO*
        - 최소제곱
        - 예측 대 설명(프로파일링)
    - 다중선형회귀

## 024-05-31
### 복습
- 데이터베이스를 분석.
    - 데이터의 성질: 위치와 변이를 가지고 의미있는 결과, 의미있는 모델을 해야함.
        - 위치 : 평균
        - 변이 : 분산, 표준편차
    - 그래프 기본 데이터
        - numpy : 숫자를 다루는 라이브러리. 타입을 하나를 정해야 함 => 속도가 빠름.
        - pandas : 파이썬의 excel. 행과 열로 이루어진 데이터.
            - Series : 일차원 데이터 (예: 한 줄의 데이터).
            - DataFrame : 행과 열로 이루어진 이차원 배열로, 각 열은 Series 객체로 구성

- 회귀(Regression) : 입력 변수(독립 변수)와 출력 변수(종속 변수) 사이의 관계를 모델링하고 예측하는 방법
    - 회귀 분석의 종류
        - 선형 회귀(Linear Regression): 입력 변수와 출력 변수 사이의 관계를 직선으로 나타내는 방법. 가장 기본적이고 많이 사용되는 회귀 방법.

        - 단순 선형 회귀(Simple Linear Regression): 하나의 독립 변수와 하나의 종속 변수 사이의 관계를 모델링.

        - 다중 선형 회귀(Multiple Linear Regression): 여러 독립 변수와 하나의 종속 변수 사이의 관계를 모델링.

        - 비선형 회귀(Non-linear Regression): 입력 변수와 출력 변수 사이의 관계가 직선이 아닌 곡선 형태로 나타나는 경우를 모델링.

        - 로지스틱 회귀(Logistic Regression): 종속 변수가 범주형일 때 사용하는 회귀 방법. 결과가 특정 범주로 나뉘는 분류 문제에 사용.

        - 릿지 회귀(Ridge Regression)와 라쏘 회귀(Lasso Regression): 과적합(overfitting)을 방지하기 위해 정규화를 추가한 선형 회귀 방법.
            - 릿지 회귀: L2 정규화를 사용하여 모델의 복잡도를 제어.
            - 라쏘 회귀: L1 정규화를 사용하여 모델의 복잡도를 제어하고 불필요한 변수는 선택하지 않음
        
        - 다항 회귀(Polynomial Regression): 선형 회귀 모델을 확장하여 다항식을 사용하여 비선형 관계를 모델링.
        -------------------------
- 회귀와 예측
    - 다중선형회귀수
        - 모형 선택 및 단계적 회귀
            - 부분집합회귀 -*https://zrr.kr/0Rtm*
        - 가중 회귀 - *https://zrr.kr/xgwt*
    - 회귀에서의 요인변수 (범주형 변수 라고도 불림.)
        - 가변수 표현
            - 원-핫 인코딩 - *https://zrr.kr/tyrQ*
        - 다수의 수준을 갖는 요인변수들 - *https://zrr.kr/bmJv*
        - 순서가 있는 요인변수
    - 회귀방정식 해석
        - 예측변수 간 상관
        - 다중공선성
            - 오류로 인해 한 변수가 여러 번 포함된 경우
            - 요인변수로부터 *P*-1개가 아닌 *P*개의 가변수가 만들어진 경우
            - 두 변수가 서로 거의 완벽하게 상관성이 있는 경우
        - 교란변수 : 중요한 예측변수이지만 회귀방정식에 누락되어 결과를 잘못되게 이끄는 변수 - **
        - 상호작용과 주효과
    - 회귀진단
        - 특잇값 - *https://zrr.kr/sUnQ*
        - 영향값
        - 이분산성 - *https://zrr.kr/fkfO* ,비정규성, 오차 간 상관
        - 부분 잔차 플롯 - *https://zrr.kr/Is5O*
        - 편잔차그림과 비선형성
    - 다향회귀와 스플라인 회귀
        - 다항식 - *https://zrr.kr/S1iZ*
        - 스플라인
        - 일반화가법모형
## 024-06-03
- 로지스틱 회귀
    - 로지스틱 회귀와 GLM - *LogisticRegression*
    - 모델 평가하기 - **
- 분류모델 평가하기