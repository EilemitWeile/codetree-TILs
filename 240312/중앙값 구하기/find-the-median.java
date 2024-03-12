import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int a=sc.nextInt();
       int b=sc.nextInt();
       int c=sc.nextInt();
       if(a>=b && a>=c){
        if(b>=c){
            System.out.printf("%d",b);
        }
        else{
            System.out.printf("%d",c);
        }
       }
       if(b>=a && b>=c){
        if(a>=c){
            System.out.printf("%d",a);
        }
        else{
            System.out.printf("%d",c);
        }
       } 
       if(c>=a && c>=a){
        if(a>=b){
            System.out.printf("%d",a);
        }
        else{
            System.out.printf("%d",b);
        }
       } // 여기에 코드를 작성해주세요.
    }
}