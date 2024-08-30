#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    
    for(int i=0; i<4; i++){
        for(int j=0; j<b-a+1; j++){
            printf("%d * %d = %d",(b-j),2*(i+1),(b-j)*(2*(i+1)));
            if(j<b-a){
                printf(" / ");
            }
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}