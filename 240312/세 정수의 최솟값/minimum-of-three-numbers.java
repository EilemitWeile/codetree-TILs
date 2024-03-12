import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
        int a=sc.nextInt(); 
        int b=sc.nextInt(); 
        int c=sc.nextInt(); 
        if(a<=b && a<=c){
            System.out.printf("%d\n",a);
        }
        else if(b<=a && b<=c){
            System.out.printf("%d\n",b);
        }
        else{
             System.out.printf("%d\n",c);
        }
        // 여기에 코드를 작성해주세요.
    }
}