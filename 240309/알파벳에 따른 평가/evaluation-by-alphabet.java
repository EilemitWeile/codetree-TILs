import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       char c=sc.next().charAt(0);
       if(c=='S'){
        System.out.printf("Superior\n");
       }
       else if(c=='A'){
        System.out.printf("Excellent\n");
       }
       else if(c=='B'){
        System.out.printf("Good\n");
       }
       else if(c=='C'){
        System.out.printf("Usually\n");
       }
       else if(c=='D'){
        System.out.printf("Effort\n");
       }
       else{
        System.out.printf("Failure\n");
       } // 여기에 코드를 작성해주세요.
    }
}