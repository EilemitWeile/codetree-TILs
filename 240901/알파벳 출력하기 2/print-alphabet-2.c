#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    char cnt='A';

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i>j){
                printf("  ");
            }
            else{
                printf("%c ",cnt);
                cnt++;
                if(cnt>'Z'){
                    cnt='A';
                }
            }
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}