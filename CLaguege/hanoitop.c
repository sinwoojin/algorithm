#include <stdio.h>

void hanoi(int n, char start, char work, char target);

void main(){
    hanoi(3,'A','B','C')

    return 0;
}

void hanoi(int n, char from, char tmp, char to){
    if( n == 1)
        printf("\n\n Move plate 1 form %c to %c.\n",form, to);
    else {
        hanoi( n - 1, form, to, tmp);
        printf("\n\n Move plate %d form %c to %c.\n", n, form, to);
        hanoi(n - 1, tmp, from, to);
    }
}