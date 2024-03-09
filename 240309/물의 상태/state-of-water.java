import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int a=sc.nextInt();
       if(a<0){
        System.out.printf("ice\n");
       }
       else if(a>=100){
        System.out.printf("vapor\n");
       }
       else{
       System.out.printf("water\n");
        } // 여기에 코드를 작성해주세요.
    }
}