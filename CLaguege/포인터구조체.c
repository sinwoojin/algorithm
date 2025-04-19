#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct employee {
    char name[10];
    int year;
    int pay;
};

void main () {
    struct employee Lee;
    struct employee *sptr = &Lee;

    strcpy(sptr -> name, "신우진"); // Lee 가잡고 있는 값에 할당
    sptr -> year = 2025;
    sptr -> pay = 9000;

    printf("\n 이름: %s",sptr -> name);
    printf("\n 입사: %d",sptr -> year);
    printf("\n 연봉: %d",sptr -> pay);

    getChar();
}