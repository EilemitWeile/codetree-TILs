#include <stdio.h>

int main() {
    int a,b,temp;
    double c;
    scanf("%d %d",&a,&b);
    temp=a,a=a+b,b=temp-b;
    c=a/b;
    printf("%.2lf",c);// 여기에 코드를 작성해주세요.
    return 0;
}