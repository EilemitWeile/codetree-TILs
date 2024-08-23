#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=n-i; j>0; j--){
            printf("*");
        }
        for(int k=i; k>0; k--){
                printf(" ");
            }
        for(int j=i; j>0; j--){
            printf(" ");
        }
        for(int k=n-i; k>0; k--){
                printf("*");
            }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}