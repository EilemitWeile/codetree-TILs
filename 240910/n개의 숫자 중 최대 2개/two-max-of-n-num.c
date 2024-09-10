#include <stdio.h>


void bubbleSort(int arr[], int N){
    int i,j,temp;
    for(i=N-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}

int main() {
    int N,arr[100]={0,};
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%d ",&arr[i]);
    }
    bubbleSort(arr,N);

    printf("%d %d",arr[0],arr[1]);

    // 여기에 코드를 작성해주세요.
    return 0;
}