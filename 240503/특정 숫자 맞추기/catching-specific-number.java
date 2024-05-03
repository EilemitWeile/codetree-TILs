import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int n;
       while(true){
        n=sc.nextInt();
        if(n>25){
            System.out.printf("Lower\n");
        }
        else if(n<25){
            System.out.printf("Higher\n");
        }
        else{
            System.out.printf("Good\n");
            break;
        }

       } // 여기에 코드를 작성해주세요.
    }
}