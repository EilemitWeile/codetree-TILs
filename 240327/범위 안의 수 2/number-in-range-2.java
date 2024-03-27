import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int n, sumVal=0, cnt=0;
       for(int i=1; i<=10; i++){
        n=sc.nextInt();
        if(n>=0 && n<=200){
            sumVal+=n;
            cnt++;
        }
       } 
       System.out.printf("%d %.1f",sumVal, (double)sumVal/cnt);// 여기에 코드를 작성해주세요.
    }
}