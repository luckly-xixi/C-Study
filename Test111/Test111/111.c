#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int isPrime(int num) {
//    if (num <= 1) {
//        return 0;
//    }
//
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) {
//            return 0;
//        }
//    }
//
//    return 1;
//}
//
//int main() {
//    int num;
//    scanf("%d", &num);
//
//    if (num <= 1) {
//        printf("input error\n");
//    }
//    else if (isPrime(num)) {
//        printf("Y\n");
//    }
//    else {
//        printf("N\n");
//    }
//
//    return 0;
//}


#include <stdio.h>

int main() {
    for (int i = 100; i <= 999; i++) {
        int num = i;
        int sum = 0;

        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }

        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
