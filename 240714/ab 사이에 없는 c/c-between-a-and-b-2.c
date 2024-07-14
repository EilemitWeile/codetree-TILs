#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    bool satisfied = true;//배수있음

    for(int i=a; i<=b; i++){
        if(c%i!=0){//배수 없음
            satisfied = false;
        }
    }
    if(satisfied == true){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}