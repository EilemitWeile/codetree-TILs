#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int cnt=9;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d",cnt);
            cnt--;
            if(cnt<1){
                cnt=9;
            }
        }
        printf("\n");   
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}