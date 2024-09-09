#include <stdio.h>
#include <limits.h>

int main() {
    int min_val=INT_MAX;
    int cnt=0;
    int N;
    scanf("%d",&N);
    int arr[100]={0,};
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<N;i++){
        if(min_val>arr[i]){
            min_val=arr[i];
        }
    }
    for(int i=0; i<N; i++){
        if(min_val==arr[i]){
            cnt++;
        }
    }
    printf("%d %d",min_val,cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}