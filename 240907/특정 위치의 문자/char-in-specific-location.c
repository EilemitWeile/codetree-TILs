#include <stdio.h>

int main() {
    char word[6]={'L','E','B','R','O','S'};
    char c;
    scanf("%c",&c);
    int idx=-1;

    for(int i=0; i<6; i++){
        if(word[i]==c){
            idx=i;
        }
    }
    if(idx==-1){
        printf("None");
    }
    else{
        printf("%d",idx);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}