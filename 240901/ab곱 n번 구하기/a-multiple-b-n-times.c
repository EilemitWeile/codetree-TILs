#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        int a,b;
        scanf("%d %d",&a,&b);
        int ans=1;

        for(int i=a; i<=b; i++){
            ans*=i;
        }
        printf("%d\n",ans);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}