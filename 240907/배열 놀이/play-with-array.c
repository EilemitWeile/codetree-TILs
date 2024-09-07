#include <stdio.h>

void q_1(int arr[], int a){
    printf("%d\n",arr[a-1]);
}

void q_2(int arr[], int n, int b){
    for(int i=0; i<n; i++){
        if(arr[i]==b){
            printf("%d\n",i+1);
            return;
            //break;
        }
        /*
        else if(i==n-1){
            printf("0\n");
            break;
        }
        */
    }
    printf("0\n");
}

void q_3(int arr[], int s,int e){
    for(int i=s-1; i<e; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}



int main() {
    int n,q;
    scanf("%d %d\n",&n,&q);
    int arr[100];
    for(int i=0; i<n; i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=0; i<q; i++){
        int ans=0;
        scanf("%d\n",&ans);
        if(ans==1){
            int a;
            scanf("%d",&a);
            q_1(arr,a);
        }
        else if(ans==2){
            int b;
            scanf("%d",&b);
            q_2(arr,n,b);
        }
        else if(ans==3){
            int s,e;
            scanf("%d %d",&s,&e);
            q_3(arr,s,e);
        }

    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}