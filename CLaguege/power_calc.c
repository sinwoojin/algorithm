#include <stdio.h>

void main(){
    // 3.14의 12승
    double res = power_calc(3.14, 12);
    printf("The result of power calculation is : %.4f", res);
}

double power_calc(double x, int n){
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