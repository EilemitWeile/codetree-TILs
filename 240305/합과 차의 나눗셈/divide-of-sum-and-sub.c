#include <stdio.h>

int main() {
    //int a,b;
    int temp;
    double a,b,c;
    scanf("%lf %lf",&a,&b);
    temp=a,a+=b,temp-=b;
    c=a/temp;
    printf("%.2lf",c);// 여기에 코드를 작성해주세요.
    return 0;
}