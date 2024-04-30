import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       int prod=0;
       for(int i=1; i<=5000; i++){
         prod=n/i;
         n=prod;
         if(prod<=1){
            System.out.printf("%d", i);
            break;
         }   
       } // 여기에 코드를 작성해주세요.
    }
}