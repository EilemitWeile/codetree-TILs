import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(i%2 == 0 || i%3 == 0 || i%5 == 0){
            continue;
        }
        cnt ++;
    }  
    System.out.printf("%d", cnt);  // 여기에 코드를 작성해주세요.
    }
}