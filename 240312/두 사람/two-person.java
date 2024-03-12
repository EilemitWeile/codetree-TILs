import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int a_old=sc.nextInt();
       char a_sex=sc.next().charAt(0);
       int b_old=sc.nextInt();
       char b_sex=sc.next().charAt(0);
       if(((a_old >=19) || (b_old>=19))&&((a_sex=='M') || (b_sex=='M'))){
        System.out.printf("1\n");
       }
       else{
        System.out.printf("0\n");
       } // 여기에 코드를 작성해주세요.
    }
}