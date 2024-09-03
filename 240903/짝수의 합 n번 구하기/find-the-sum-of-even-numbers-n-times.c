#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        int a,b;
        scanf("%d %d",&a,&b);
        int add_sum=0;
        for(int j=a; j<=b; j++){
            if(j%2==0){
                add_sum+=j;
            }
        }
        printf("%d\n",add_sum);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}