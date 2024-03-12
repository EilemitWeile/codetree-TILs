import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int score1=sc.nextInt();
       int score2=sc.nextInt();
       if(score1>=90){
        if(score2>=95){
          System.out.printf("100000\n");
        }
        else if(score2>=90){
          System.out.printf("50000\n");
        }
        else{
          System.out.printf("0\n");
        }
       }
       else{
        System.out.printf("0\n");
       } // 여기에 코드를 작성해주세요.
    }
}