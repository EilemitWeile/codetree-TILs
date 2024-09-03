#include <stdio.h>

int main() {
    int start,end;
    scanf("%d %d",&start,&end);
  
    int divisor_cnt=0;
  

    for(int i=start; i<=end; i++){
        int divisor=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                divisor++;
            }

        }
        if(divisor==3){
            divisor_cnt++;
        }
    }
    
    printf("%d",divisor_cnt);


    // 여기에 코드를 작성해주세요.
    return 0;
}