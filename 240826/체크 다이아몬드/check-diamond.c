#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            printf(" ");
        }
        for(int j=0; j<2*i+1; j++){
            if(j%2==0){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        printf("\n");
    }
    
      for (int i = n - 2; i >= 0; i--) {
        // 공백 출력
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // 별 출력
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j % 2 == 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}