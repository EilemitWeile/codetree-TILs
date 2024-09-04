#include <stdio.h>

int main() {
    int arr[10];
    int add_sum=0;
    int even_sum=0;

    for(int i=0; i<10; i++){
       scanf("%d",&arr[i]);
       if((i+1)%2==0){
            even_sum+=arr[i];
       }
       else{
            add_sum+=arr[i];
       } 
    }
    if(add_sum>=even_sum){
        printf("%d",add_sum-even_sum);
    }
    else{
        printf("%d",even_sum-add_sum);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}