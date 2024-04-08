import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       int sum=0;
       for(int i=1; i<=n; i++){
        int score=sc.nextInt();
        sum+=score;
       }
       System.out.printf("%d %.1f",sum,(double)sum/n); // 여기에 코드를 작성해주세요.
    }
}