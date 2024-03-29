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
## 024-03-26
---

- C++
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