#include <stdio.h>

long long int factorial(long long int n){
    if(n == 0) {
        return 1;
    } 
    else {
        return n * factorial(n-1);
    }
}

int main(){
    long long int n;
    scanf("%lld",&n);
    printf("%lld", factorial(n));
    return 0;
}

/* 문제
0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 정수 N(0 ≤ N ≤ 20)이 주어진다.

출력
첫째 줄에 N!을 출력한다. */