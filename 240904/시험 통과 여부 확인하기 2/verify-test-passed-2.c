#include <stdio.h>

int main() {
    
    int studentN;
    scanf("%d",&studentN);

    int passStudentN=0;

    for(int i=0; i<studentN; i++){
        int score_sum=0;
        //double score_avg=0;

        int arr[4];

        for(int j=0; j<4; j++){
            scanf("%d ",&arr[j]);
            score_sum+=arr[j];
        }
        double score_avg=(double)score_sum/4;

        if(score_avg>=60){
            printf("pass\n");
            passStudentN++;
        }
        else{
            printf("fail\n");
        }

        //printf("\n");
    }
    printf("%d",passStudentN);
    // 여기에 코드를 작성해주세요.
    return 0;
}