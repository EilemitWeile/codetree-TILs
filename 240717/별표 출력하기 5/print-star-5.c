#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=n; i>0; i--){
        for(int j=0; j<i; j++){
            for(int k=0; k<i; k++){
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}