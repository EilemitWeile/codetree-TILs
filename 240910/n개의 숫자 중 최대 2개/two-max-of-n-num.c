#include <stdio.h>

int main() {
    int N,arr[100]={0,},max1,max2;
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%d ",&arr[i]);
    }
    if(arr[0]>arr[1]){
        max1=arr[0];
        max2=arr[1];
    }
    else{
        max1=arr[1];
        max2=arr[0];
    }
    for(int i=0; i<N; i++){
        if(arr[i]>=max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max2=arr[i];
        }
    }
    printf("%d %d",max1,max2);

    // 여기에 코드를 작성해주세요.
    return 0;
}