import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int n,cnt=0;
       for(int i=1; i<=10; i++){
            n=sc.nextInt();
            if(n%2 !=0){
                cnt++;
            }
       }
        System.out.printf("%d",cnt);
       // 여기에 코드를 작성해주세요.
    }
}