#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            printf("%d ",(i+1)*(j+1));
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}