import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      int n, cnt3=0, cnt5=0;
      for(int i=1; i<=10; i++){
        n=sc.nextInt();
        if(n%3==0){
            cnt3++;
            }
        if(n%5==0){
            cnt5++;
            }// 여기에 코드를 작성해주세요.
    }
    System.out.printf("%d %d", cnt3,cnt5);
}
}