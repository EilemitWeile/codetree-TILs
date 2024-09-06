#include <stdio.h>

int main() {
    int arr[100];
    int cnt=0;
    for(int i=0; i<100; i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            cnt=i;
            break;
        }
    }
    for(int i=0; i<cnt; i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]/2);
        }
        else{
            printf("%d ",arr[i]+3);
        }
       
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}