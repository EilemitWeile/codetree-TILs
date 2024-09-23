#include <stdio.h>
//#include <stdbool.h>

int main() 
{
    int N;
    scanf("%d",&N);
    int arr[1000]={0,};
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    int MAX=-1;
    for(int i=0; i<N; i++)
    {
        int curr_num=arr[i];
        if(curr_num>MAX)
        {
            int count=0;
            for(int j=0; j<N; j++)
            {
                if(arr[j]==curr_num)
                {
                    count++;
                }
            }
            if(count==1)
            {
                MAX=curr_num;
            }
        }
    }
    printf("%d",MAX);
    // 여기에 코드를 작성해주세요.
    return 0;
}