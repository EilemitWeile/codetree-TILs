#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[5];
    //int a=0;
    bool satisfied = true;//모두 3의 배수

    for(int i=0; i<5; i++){
        scanf("%d\n",&arr[i]);
        if(arr[i]%3!=0){
            satisfied = false;
        }
    }

    /*
    for(int i=arr[a]; a<5; a++){
        if(i%3!=0){
            satisfied = false;//모두 3의 배수 아님
        }
    }*/
    if(satisfied == true){
        printf("1\n");
    }
    else{
        printf("0\n");
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}