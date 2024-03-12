import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int am=sc.nextInt();
       int ae=sc.nextInt();
       int bm=sc.nextInt();
       int be=sc.nextInt();
       if(am > bm && ae > be){
        System.out.printf("1\n");// 여기에 코드를 작성해주세요.
    }
    else{
        System.out.printf("0\n");
    }
}
}