import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       for(int i=n; i<=100; i++){
        if(i<60){
            System.out.printf("F ");
        }
        else if(70>i && i>=60){
            System.out.printf("D ");
        }
        else if(80>i && i>=70){
            System.out.printf("C ");
        }
        else if(90>i && i>=80){
            System.out.printf("B ");
        }
        else{
            System.out.printf("A ");
        }
       } // 여기에 코드를 작성해주세요.
    }
}