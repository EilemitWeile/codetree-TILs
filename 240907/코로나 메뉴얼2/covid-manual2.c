#include <stdio.h>

int main() {
    int temperature=0;
    char s;
    int count_arr[5]={0,};
    int type_num=0;

    for(int i=0; i<3; i++){
        scanf(" %c %d",&s,&temperature);

        if(s=='Y' && temperature>=37){
            type_num=1;
        }
        else if(s=='N' && temperature>=37){
            type_num=2;
        }
        else if(s=='Y' && temperature<37){
            type_num=3;
        }
        else{
            type_num=4;
        }
        count_arr[type_num]++;
        
    }

    for(int i=1; i<5; i++){
        printf("%d ",count_arr[i]);
    }

    if(count_arr[1]>=2){
        printf("E");
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}