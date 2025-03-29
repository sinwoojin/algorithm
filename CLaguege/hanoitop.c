#include <stdio.h>

// 함수 선언
// n : 원판의 갯수, from: 시작 기둥, tmp: 임시기둥, to: 목표기둥
void hanoi(int n, char start, char work, char target);

void main(){
    //n개의 원판을 A기둥에서 C기둥으로 옮기기위한 하노이탑 함수 호출
    hanoi(3,'A','B','C')

    return 0;
}

// 하노이탑 함수 정의
// n : 원판의 갯수, from: 시작 기둥, tmp: 임시기둥, to: 목표기둥
void hanoi(int n, char from, char tmp, char to){
    // 원판이 하나일 경우, 시작 기둥에서 목표 기둥으로 옮기면 됨
    if( n == 1)
    // 1번 원판을 시작 기둥에서 목표 기둥으로 옮긴다는 메시지 출력
        printf("\n\n Move plate 1 from %c to %c.\n",from, to);
    else {
        // 1. 먼저 (n - 1)개의 원판을 from 에서 tmp로 옮긴다
        // tmp는 임시 기둥이므로, 목표 기둥인 to는 대신 사용된다.
        hanoi( n - 1, from, to, tmp);

        // 2. n번째 원판(가장 큰 원판)을 from에서 to로 옮긴다.
        printf("\n\n Move plate %d from %c to %c.\n", n, from, to);

        // 3. 마지막으로, (n - 1)개의 원판을 tmp에서 to로 옮긴다.
        // 이제 tmp는 원판들이 이동한 기둥이고, to는 최종 목표 기둥이다.
        hanoi(n - 1, tmp, from, to);
    }
}