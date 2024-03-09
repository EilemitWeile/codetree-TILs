import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int score=sc.nextInt();
       if(score>=90){
        System.out.printf("A\n");
       }
       else if(score>=80){
        System.out.printf("B\n");
       }
       else if(score>=70){
        System.out.printf("C\n");
       }
       else if(score>=60){
        System.out.printf("D\n");
       }
       else{
        System.out.printf("F\n");
       } // 여기에 코드를 작성해주세요.
    }
}