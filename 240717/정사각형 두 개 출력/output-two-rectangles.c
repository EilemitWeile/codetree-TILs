#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}