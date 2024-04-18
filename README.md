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
    -https://github.com/hongsola92/mifasol_a/blob/main/c%2B%2B/cpp_src/chap4/ex4_2/main.cpp
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