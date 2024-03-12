import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      int ams=sc.nextInt();
      int aes=sc.nextInt();
      int bms=sc.nextInt();
      int bes=sc.nextInt();
      if(ams>bms || (ams==bms && aes>bes)){
        System.out.printf("A\n");
      }
      else{
        System.out.printf("B\n");
      }
      
        // 여기에 코드를 작성해주세요.
    }
}