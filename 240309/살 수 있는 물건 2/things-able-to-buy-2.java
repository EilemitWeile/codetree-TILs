import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       if(n>=3000){
        System.out.printf("book\n");
       }
       else if(n>=1000){
        System.out.printf("mask\n");
       }
       else if(n>=500){
        System.out.printf("pen\n");
       }
       else{
        System.out.printf("no\n");
       } // 여기에 코드를 작성해주세요.
    }
}