#include <stdio.h>

int main() {
    int arr[100];
    int count_arr[11]={0,};
    for(int i=0; i<100; i++){
        scanf("%d",&arr[i]);
        
        if(arr[i]==0){
            break;
        }
        if(arr[i]<10){
            continue;
        }
        count_arr[arr[i]/10]++;
    }
    for(int i=10; i>0; i--){
        printf("%d0 - %d\n",i,count_arr[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}