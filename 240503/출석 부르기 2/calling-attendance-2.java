import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int n;
       while(true){
        n=sc.nextInt();
        if(n==1){
            System.out.printf("John\n");
        }
        else if(n==2){
            System.out.printf("Tom\n");
        }
        else if(n==3){
            System.out.printf("Paul\n");
        }
        else if(n==4){
            System.out.printf("Sam\n");
        }
        else{
            System.out.printf("Vacancy\n");
            break;
        }
       } // 여기에 코드를 작성해주세요.
    }
}