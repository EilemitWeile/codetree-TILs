import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int []arr=new int[10];
        int sum_val=0;
        for(int i=0; i<10; i++){
            arr[i]=sc.nextInt();
            sum_val+=arr[i];
        }

        System.out.printf("%d",sum_val);
        // 여기에 코드를 작성해주세요.
    }
}