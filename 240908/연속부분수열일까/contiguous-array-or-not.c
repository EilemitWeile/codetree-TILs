#include <stdio.h>
#include <stdbool.h>

int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int A[100]={0,};
    int B[100]={0,};

    for(int i=0; i<n1; i++){
        scanf("%d",&A[i]);
    }
     for(int i=0; i<n2; i++){
        scanf("%d",&B[i]);
    }

    for(int i=0; i<n1; i++){
        bool success=true;
        for(int j=0; j<n2; j++){
            if(i+j>=n1){
                success=false;
                break;
            }
            if(A[i+j]!=B[j]){
                success=false;
                break;
            }
        }
        if(success==true){
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    // 여기에 코드를 작성해주세요.
    return 0;
}