#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        bool primeN=true;

        if(i==1){
            continue;
        }
        
        for(int j=2; j<i; j++){
            if(i%j==0){
                primeN=false;
            }
            
        }
        if(primeN){
            printf("%d ",i);
        }
       
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}