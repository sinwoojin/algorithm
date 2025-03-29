#include <stdio.h>

void main(){
    // 3.14의 12승
    double res = power_calc(3.14, 12);
    printf("The result of power calculation is : %.4f", res);
}

// 교수님 풀이
double power_calc(double x, int n){ // 함수 앞에 반환값을 반드시 작성
    // 0승이면 1 리턴
    if(n == 0)
        return 1;
    // 짝수일때 출력
    else if(n % 2 == 0)
        return (power_calc(x * x, n/2));
    // 홀수일떄 출력
    else
        return (x * power_calc(x * x, (n - 1)/ 2));
}

// 내 풀이
long int power(double n, int p){
    long result = n;
    if( p == 0)
        return 1
    for (int i = 1; i < p; i++){ // p번 곱셈 수행
        result *= n
    }
    return result
}

// 수정한 풀이
double powerEdit(double n, int p){
    double result = 1.0; // 초기값을 1로 설정하여 계산
    if (p == 0) // p가 0 일때는 1을 반환
        return 1;
    for (int i = 1; i <= p; i++){
        result += n;
    }
    return result;
}