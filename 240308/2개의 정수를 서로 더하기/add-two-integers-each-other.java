import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        a+=b;b+=a;
        System.out.printf("%d %d",a,b);// 여기에 코드를 작성해주세요.
    }
}