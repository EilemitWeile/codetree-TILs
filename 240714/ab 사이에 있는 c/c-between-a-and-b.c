#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a,&b,&c);

    bool satisfied = false;

    for(int i=a; i<=b; i++){
        if(i%c==0){
            satisfied = true;
        }
    }
    if(satisfied == true){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}