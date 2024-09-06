#include <stdio.h>

int main() {
    int arr[100];
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]*arr[i]);
    }
   
    // 여기에 코드를 작성해주세요.
    return 0;
}