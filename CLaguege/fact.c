#include <stdio.h>

// 4n + 2 비례 곡선
// n! = n * (n-1)!

// 팩토리얼 값을 재귀함수로 구하기
long int fact(int n){
    if (n <= 1)
        return (1);
    else
        return (n * fact(n - 1));
}

void main(){
    long int result;

    result = fact(5);
    printf("\n\n\n\tThe factorial result is -> %d\n\n\n", result); // 10진수 출력
}

// 재귀함수 없이 사용하기 두번째 방법
long int fact2(int n){
    int i, f = 1;
    if(n <= 1)
        return (1);
    else{
        for (i = n; i > 0; i++)
            f = f * i;
        return f
    }
}

