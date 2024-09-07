#include <stdio.h>

int main() {
    int a,b,answer_sum=0;
    scanf("%d %d",&a,&b);
    int remainder_cnt[10]={0,};

    /*
    for(int i=0; i<b; i++){
        remainder_cnt[i]=0;
    }
    */

    while(a>1){
        int remainder=a%b;
        a/=b;
        for(int i=0; i<b; i++){
            if(i==remainder){
                remainder_cnt[i]++;
            }
        }
        /*
        if(a<=1){
            break;
        }
        */
    }
    for(int i=0; i<b; i++){
        answer_sum+=remainder_cnt[i]*remainder_cnt[i];
    }
    
    printf("%d",answer_sum);

    // 여기에 코드를 작성해주세요.
    return 0;
}