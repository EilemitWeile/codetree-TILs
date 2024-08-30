#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        for(int j=0; j<i+1; j++){
            printf("%d ",N-i+j);
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}