#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int cnt=1;
    for(int i=n; i>0; i--){
        for(int j=n; j>0; j--){
            if(j>i){
                printf("  ");
            }
            else{
                printf("%d ",cnt);
                cnt++;
                if(cnt>9){
                    cnt=1;
                }
                
            }
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}