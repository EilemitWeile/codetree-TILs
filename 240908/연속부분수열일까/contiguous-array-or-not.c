#include <stdio.h>

int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int A[100]={0,};
    int B[100]={0,};
    int cnt=0;

    for(int i=0; i<n1; i++){
        scanf("%d",&A[i]);
    }
     for(int i=0; i<n2; i++){
        scanf("%d",&B[i]);
    }
    for(int i=0; i<n2; i++){
        if(A[i]==B[i]){
            cnt++;
       }
    }
    if(cnt>0) printf("Yes");
    else printf("No");
    // 여기에 코드를 작성해주세요.
    return 0;
}