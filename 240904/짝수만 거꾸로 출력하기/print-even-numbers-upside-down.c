#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int whole[100];

    for(int i=0; i<n; i++){
        scanf("%d",&whole[i]);
    }
    for(int i=n-1; i>=0; i--){
        if(whole[i]%2==0){
            printf("%d ",whole[i]);
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}