import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int a=sc.nextInt(),b=sc.nextInt();
       if(a>=b){
        System.out.printf("%d\n",a-b);

       }
       else{
        System.out.printf("%d\n",b-a);
       } // 여기에 코드를 작성해주세요.
    }
}