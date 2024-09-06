#include <stdio.h>

int main() {
    int A1,A2;
    scanf("%d %d",&A1,&A2);
    int arr[10]={A1,A2};
    
    for(int i=2; i<10; i++){
        arr[i]=arr[i-1]+2*arr[i-2];
    }
    for(int i=0; i<10; i++){
        printf("%d ",arr[i]);
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}