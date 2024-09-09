#include <stdio.h>
#include <limits.h>

int main() {
    int max_val=INT_MIN;
    int arr[10]={0,};
    for(int i=0; i<10; i++){
        scanf("%d ",&arr[i]);
    }
    for(int  i=0; i<10; i++){
        if(arr[i]>max_val){
            max_val=arr[i];
        }
    }
    printf("%d",max_val);
      
    // 여기에 코드를 작성해주세요.
    return 0;
}