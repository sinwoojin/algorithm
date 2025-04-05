#include <stdio.h>

void main(){

    unsigend char ch; // unsigned 타입 지정을 할거라는 문구

    ch = 'A';

    printf("\n\n\nHello World!\n\n\n")
    printf("\t THe content of ch in decimal is: %d!\n\n\n",ch); // 10진수로 변환
    printf("\t THe content of ch in hexadecimal is: %x!\n\n\n",ch); // 16진수
    printf("\t THe content of ch in octal is: %o!\n\n\n",ch); // octal로 반환
    printf("\t THe content of ch in character is: %c!\n\n\n",ch); // char로 반환
}

/*
    C언어 기본 데이터 타입 [

        정수형 타입 {
            1. short(캐릭터)
            2. unsigned short(2byte)
            3. int(4byte)
            4. unsigned int (4byte)
            5. long (4byte)
            6. unsigned long(4byte)
            7. long long (2byte)
        }

        실수형 타입 {
            1. float(4byte)
            2. double(8byte)
            3. long double(double형과 동일함)
            }

        문자형 타입 {
            1. char (1byte)
            2. unsigned char(2byte)
        }
    ]

 */