#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);

    bool satisfied = false;

    for(int i=a; i<=b; i++){
        if((1920%i==0)&&(2880%i==0)){
            satisfied = true;
        }
    }
    if(satisfied == true){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}