import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int cnt=0;
       while(true){
       int n=sc.nextInt();
       if(n%2==1){ //홀수
        continue;
       }
       else{ //짝수
        System.out.printf("%d\n", n/2);
        cnt++;
       }
       if(cnt>=3){
        break;
       }
       // 여기에 코드를 작성해주세요.
    }
    }
}