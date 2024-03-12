import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int a=sc.nextInt();
       if(a%13==0 || a%19==0){
        System.out.printf("True\n");
       }
       else{
        System.out.printf("False\n");

       } // 여기에 코드를 작성해주세요.
    }
}