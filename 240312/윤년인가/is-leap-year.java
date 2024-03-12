import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      int y=sc.nextInt();
      if((y%100==0 && y%400!=0) || (y%4!=0)){
        System.out.printf("false\n");
      }
      else{
        System.out.printf("true\n");
      }  // 여기에 코드를 작성해주세요.
    }
}