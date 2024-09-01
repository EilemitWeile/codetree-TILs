#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            printf("%d * %d = %d",i+1,j,(i+1)*j);
            if(j>=n-i){
                printf("\n");
            }
            else{
                printf(" / ");
            }
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}