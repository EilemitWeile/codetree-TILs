#include <stdio.h>

int main() {
    int arr[100];
    int answer=0;

    for(int i=0; i<100; i++){
        scanf("%d ",&arr[i]);
        if(arr[i]==0){
            answer=i;
            break;
        }
    }
    
    printf("%d",arr[answer-1]+arr[answer-2]+arr[answer-3]);
    // 여기에 코드를 작성해주세요.
    return 0;
}