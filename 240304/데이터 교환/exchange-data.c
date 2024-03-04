#include <stdio.h>

int main() {
   int a=5,b=6,c=7;
   int stemp1,stemp2;
   stemp1=b;
   b=a,stemp2=c;
   a=stemp2,c=stemp1;
   printf("%d\n%d\n%d",a,b,c); // 여기에 코드를 작성해주세요.
    return 0;
}