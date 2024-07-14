#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    bool satisfied = true;

    for(int i=a; i<=b; i++){
        if(c%2!=0){
            satisfied = false;
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