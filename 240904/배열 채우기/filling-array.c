#include <stdio.h>

int main() {
    int answer=0;
    int arr[10];
    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            answer=i;
            for(int j=i-1; j>=0; j--){
                printf("%d ",arr[j]);
            }
        }
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}