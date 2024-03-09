import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int number=sc.nextInt();
       if (number==1){
        System.out.printf("John\n");
       }
       else if(number==2){
        System.out.printf("Tom\n");
       }
       else if(number==3){
        System.out.printf("paul\n");
       }
       else{
        System.out.printf("Vacancy\n");
       } // 여기에 코드를 작성해주세요.
    }
}