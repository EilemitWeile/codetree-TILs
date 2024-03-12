import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      int m=sc.nextInt();
      if(m>=3 && m<=5){
        System.out.printf("Spring\n");
      } 
      else if(m>=6 && m<=8){
        System.out.printf("Summer\n");

      } 
      else if(m>=9 && m<=11){
        System.out.printf("Fall\n");

      }
      else{
        System.out.printf("Winter\n");
      } // 여기에 코드를 작성해주세요.
    }
}