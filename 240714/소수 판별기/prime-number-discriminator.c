#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    bool satisfied = true;//n이 소수이다.

    for(int i=2; i<n; i++){
        if(n%i==0){
            satisfied = false;//n이 소수가 아니다.
        }
    }
    if(satisfied == true){
        printf("P\n");
    }
    else{
        printf("C\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}