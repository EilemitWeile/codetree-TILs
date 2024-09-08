#include <stdio.h>

int main() {
    int cnt=0;
    int answer=0;
    int n;
    scanf("%d",&n);
    int arr[100]={0,};
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]==2){
            cnt++;
            if(cnt==3){
                answer=i+1;
            }
        }
       
    }
    printf("%d",answer);

    // 여기에 코드를 작성해주세요.
    return 0;
}