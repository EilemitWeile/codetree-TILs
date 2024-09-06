#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[100];
    int evenN[100];
    int cnt=0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            evenN[cnt++]=arr[i];
        }
        
    }
    for(int i=0; i<cnt; i++){
        printf("%d ",evenN[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}