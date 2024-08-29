#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int cnt=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i%2==0){
                printf("%d ",1+cnt);
                cnt++;
            }
            else{
                printf("%d ",2+cnt);
                cnt+=2;
            }
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}