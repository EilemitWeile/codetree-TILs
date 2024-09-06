#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[100]={1,n};
    int cnt=0;
    for(int i=2; i<100; i++){
        arr[i]=arr[i-1]+arr[i-2];
        if(arr[i]>=100){
            cnt=i;
            break;
        }
    }
    for(int i=0; i<=cnt; i++){
        printf("%d ",arr[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}