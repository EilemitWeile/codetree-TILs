#include <stdio.h>

int main() {
    int start,end;
    scanf("%d %d",&start,&end);
    int cnt=0;

    for(int i=start; i<=end; i++){

        int n=0;
    
        for(int j=1; j<i; j++){
            if(i%j==0){
                n+=j;
            }
        }
        if(n==i){
            cnt++;
        }
    }
    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}