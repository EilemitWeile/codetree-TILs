#include <stdio.h>

int main() {
    int arr[10];
    int sum=0;
    double avg=0;
    int condition=0;
    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
        condition++;
        sum+=arr[i];
        if(arr[i]==0){
            break;
        }
        avg=(double)sum/condition;

    }
    printf("%d %.1lf",sum,avg);
    // 여기에 코드를 작성해주세요.
    return 0;
}