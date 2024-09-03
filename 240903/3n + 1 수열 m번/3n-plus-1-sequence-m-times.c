#include <stdio.h>

int main() {
    int m;
    scanf("%d\n",&m);
    int cnt=0;
    for(int i=0; i<m; i++){
        int n;
        
        scanf("%d\n",&n);

        while(n!=1){
            if(n%2==0){
                n/=2;
            }
            else{
                n=3*n+1;
            }
            cnt++;
        }
        printf("%d\n",cnt);
    }
    
    
    
    // 여기에 코드를 작성해주세요.
    return 0;
}