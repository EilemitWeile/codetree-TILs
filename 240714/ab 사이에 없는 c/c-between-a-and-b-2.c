#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    bool satisfied = true;//배수 없는가? -ㅇㅇ

    for(int i=a; i<=b; i++){
        if(i%c==0){//배수 있음
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