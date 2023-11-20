
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void findUnsafeHoles(int n) {
    int* holes = (int*)malloc(n * sizeof(int));
    int i, gap, current_hole;

    for (i = 0; i < n; i++) {
        holes[i] = 0;
    }

    for (gap = 1; gap < n; gap++) {
        current_hole = 0;
        while (current_hole < n) {
            holes[current_hole] = 1;
            current_hole += gap + 1;
        }
    }

    printf("不安全的洞号：");
    for (i = 0; i < n; i++) {
        if (holes[i] == 1) {
            printf("%d ", i);
        }
    }

    free(holes);
}

int main() {
    int N = 30;
    findUnsafeHoles(N);
    return 0;
}
