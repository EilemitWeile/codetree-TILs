import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int a=sc.nextInt();
       if(a%3==0){
        System.out.printf("YES\n");
       }
       else{
        System.out.printf("NO\n");
       }
       if(a%5==0){
        System.out.printf("YES\n");
       }
       else{
        System.out.printf("NO\n");
       } // 여기에 코드를 작성해주세요.
    }
}