import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
        if(n==2){
            System.out.printf("28");
        }
        else if(n<=7){
           if(n%2==0){
             System.out.printf("30");
           }
           else{
            System.out.printf("31");
           }
        }
      else{
        if(n%2==0){
            System.out.printf("31");
        }
        else{
            System.out.printf("30");
        }
      }  // 여기에 코드를 작성해주세요.
    }
}