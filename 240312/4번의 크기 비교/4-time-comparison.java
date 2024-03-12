import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int a=sc.nextInt();
       int b=sc.nextInt();
       int c=sc.nextInt();
       int d=sc.nextInt();
       int e=sc.nextInt();

       System.out.printf("%d\n",a>b ? 1:0);
       System.out.printf("%d\n",a>c ? 1:0);
       System.out.printf("%d\n",a>d ? 1:0);
       System.out.printf("%d\n",a>e ? 1:0); // 여기에 코드를 작성해주세요.
    }
}