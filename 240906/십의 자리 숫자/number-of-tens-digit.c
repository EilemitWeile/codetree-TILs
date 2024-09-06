#include <stdio.h>

int main() {
    int arr[100];
    int count_arr[10]={0,};

    for(int i=0; i<100; i++){
        scanf("%d",&arr[i]);
        count_arr[arr[i]/10]++;
        if(arr[i]==0){
            break;
        }
        
    }
    for(int i=1; i<10; i++){
        printf("%d - %d\n",i,count_arr[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}