#include <stdio.h>
#include <stdbool.h>

int main() {
   int n;
   int cnt=0;
   scanf("%d",&n);
   while(1){
    if(n>1){
        n=n/2;
        cnt++;
    }
    else{
        break;
    }
   }
   printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}