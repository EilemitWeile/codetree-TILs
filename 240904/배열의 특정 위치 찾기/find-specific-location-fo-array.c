#include <stdio.h>

int main() {
    int wholeN[10];
    int even_sum=0;
    int answer_sum=0;
    int answer_cnt=0;

    for(int i=0; i<10; i++){
        scanf("%d",&wholeN[i]);
        if(i%2!=0){
            even_sum+=wholeN[i];
        }
        if(i==0||i==1){
            continue;
        }
        else if(i%2==0){
            answer_sum+=wholeN[i];
            answer_cnt++;
        }
    }

    double answer_avg=(double)answer_sum/answer_cnt;

    printf("%d %.1lf",even_sum,answer_avg);

    // 여기에 코드를 작성해주세요.
    return 0;
}