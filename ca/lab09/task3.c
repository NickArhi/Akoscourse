#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int** mat = (int**)malloc(N * sizeof(int*));
    for (int i = 0; i < N; ++i) {
        mat[i] = (int*)malloc(M * sizeof(int));
    }
    int** mat_t = (int**)malloc(M * sizeof(int*));
    for (int i = 0; i < M; ++i) {
        mat_t[i] = (int*)malloc(N * sizeof(int));
    }
    for (int i = 0; i < N; ++i){
        for(int j = 0; j < M; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < M; ++i){
        for(int j = 0; j < N; j++){
            mat_t[i][j] = mat[j][i];
        }
    }
    for (int i = 0; i < M; ++i){
        printf("\n");
        for(int j = 0; j < N; j++){
            printf("%d\t", mat_t[i][j]);
        }
    }
    return 0;
}
