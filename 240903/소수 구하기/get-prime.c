#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        int divisor_cnt=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                divisor_cnt++;
            }
            if(divisor_cnt==2){
                printf("%d ",j);
        }
        }
        
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}