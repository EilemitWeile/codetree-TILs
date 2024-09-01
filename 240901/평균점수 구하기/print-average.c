#include <stdio.h>

int main() {
    double arr[8];
    double score_sum;
    for(int i=0; i<8; i++){
        scanf("%lf",&arr[i]);
        score_sum+=arr[i];
    }
    double avg=score_sum/8;
    printf("%.1lf",avg);
    // 여기에 코드를 작성해주세요.
    return 0;
}