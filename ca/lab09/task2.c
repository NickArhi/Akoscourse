//task2
#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){
    int z = *x;
    *x = *y;
    *y = z;
}

int main() {
    int N;
    scanf("%d", &N);
    int* p1 = malloc(N*sizeof(int));
    for (int i = 0; i < N; ++i) {
        scanf("%d", &p1[i]);
    }
    for (int j = 0; j < N/2; ++j){
        swap(&p1[j], &p1[N-j-1]);
    }
    for (int k = 0; k < N; ++k){
        printf("%d\n", p1[k]);
    }
    free(p1);
    return 0;
}
