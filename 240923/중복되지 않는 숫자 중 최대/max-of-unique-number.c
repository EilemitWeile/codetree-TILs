#include <stdio.h>
//#include <stdbool.h>

int main() {
    int N;
    scanf("%d",&N);
    int arr[1000]={0,};
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    int MAX=-1;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(arr[i]==arr[j]){
                break;
            }
            else{
                MAX=arr[i];
            }
        }
    }
    printf("%d",MAX);
    // 여기에 코드를 작성해주세요.
    return 0;
}