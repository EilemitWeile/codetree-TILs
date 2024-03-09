import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        double a=sc.nextDouble();
        if(a>=1.0){
            System.out.printf("High\n");
        }
        else if(a>=0.5){
            System.out.printf("Middle\n");
        }
        else{
            System.out.printf("Low\n");
        }// 여기에 코드를 작성해주세요.
    }
}