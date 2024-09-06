#include <stdio.h>

int main() {
    int arr[10];
    scanf("%d",&arr[0]);
    for(int i=1; i<10; i++){
        arr[i]=(i+1)*arr[0];
    }
    for(int i=0; i<10; i++){
        int cnt=0;
        if(arr[i]%5==0){
            cnt++;
            if(cnt==2){
                break;
            }
        }
        printf("%d ",arr[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}