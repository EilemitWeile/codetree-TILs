#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    int cnt=0;
    scanf("%d", &n);
    
    while(1){

        if(n%2==1){
            n=1+3*n;
            cnt++;
            //continue;
        }
        else{
            n=n/2;
            cnt++;
            //continue;
        }
        if(n==1){
            break;
        }
    }
    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}