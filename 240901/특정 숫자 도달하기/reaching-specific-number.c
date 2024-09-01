#include <stdio.h>

int main() {
    int arr[10];
    int sum_val=0;
    int cnt=0;
    double avg=0;

    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=250){
            break;
        }
        sum_val+=arr[i];
        cnt++;

    }
    avg=(double)sum_val/cnt;
    printf("%d %.1lf",sum_val,avg);

    // 여기에 코드를 작성해주세요.
    return 0;
}