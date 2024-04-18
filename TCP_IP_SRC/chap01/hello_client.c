#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

void error_handling(char *message);

int main(int argc, char *argv[])
{
    int sock; // 소켓 디스크립터
    struct sockaddr_in serv_addr; // 서버 주소 구조체
    char message[30]; // 서버로부터 읽어들인 메시지를 저장할 배열
    int str_len; // 읽어들인 메시지의 길이

    // 명령행 인수가 3개가 아닌 경우 오류 메시지 출력 후 프로그램 종료
    if(argc != 3)
    {
        printf("Usage : %s <IP> <port>\n", argv[0]);
        exit(1);
    }

    // 소켓 생성
    sock = socket(PF_INET, SOCK_STREAM, 0);
    if(sock == -1)
        error_handling("socket() error");

    // 서버 주소 구조체 초기화 및 설정
    memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr(argv[1]); // 첫 번째 인수는 서버 IP 주소
    serv_addr.sin_port = htons(atoi(argv[2])); // 두 번째 인수는 서버 포트 번호

    // 서버에 연결
    if(connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) == -1)
        error_handling("connect() error!");

    // 서버로부터 메시지 읽기
    str_len = read(sock, message, sizeof(message)-1);
    if(str_len == -1)
        error_handling("read() error!");

    // 읽은 메시지 출력
    printf("Message from server: %s\n", message);

    // 소켓 닫기
    close(sock);

    return 0;
}

// 오류 메시지 출력 함수
void error_handling(char *message)
{
    fputs(message, stderr);
    fputc('\n', stderr);
    exit(1);
}