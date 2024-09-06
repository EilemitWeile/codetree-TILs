#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[10]={a,b};
    for(int i=2; i<10; i++){
        arr[i]=(arr[i-1]+arr[i-2])%10;
    }
    for(int i=0; i<10; i++){
        printf("%d ",arr[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}