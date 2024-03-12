import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int gen=sc.nextInt();
       int old=sc.nextInt();
       if(gen==0){
        if(old>=19){
            System.out.printf("MAN\n");
        }
        else{
            System.out.printf("BOY\n");
        }
       }
       else{
        if(old>=19){
            System.out.printf("WOMAN\n");
        }
        else{
            System.out.printf("GIRL\n");
        }
       } // 여기에 코드를 작성해주세요.
    }
}