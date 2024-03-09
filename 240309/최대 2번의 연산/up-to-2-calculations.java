import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int a=sc.nextInt();
       if(a%2==0){
        a=a/2;
       }
       if(a%2==1){
        a+=1;
        a=a/2;
       }
       System.out.printf("%d\n",a); // 여기에 코드를 작성해주세요.
    }
}