#include <stdio.h>

int main() {
    int arr[10];
    int sum_evenN=0;
    int cnt_evenN=0;

    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);

        if(arr[i]==0){
            break;
        }
        else if(arr[i]%2==0){
            cnt_evenN++;
            sum_evenN+=arr[i];
        }
        
    }

    printf("%d %d",cnt_evenN,sum_evenN);
    // 여기에 코드를 작성해주세요.
    return 0;
}