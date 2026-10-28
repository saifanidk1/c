#include <stdio.h>

int main () {
    for (long long int i = 2; i <=1000000000000000000; i++) {

        int isPrime = 1;
        for (long long int j = 2; j*j <= i; j++){
            if (i % j == 0){
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1){
            printf("%lld\n", i);
        }
    }
    return 0;
}