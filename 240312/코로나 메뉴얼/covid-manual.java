import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       char c1=sc.next().charAt(0);
       int f1=sc.nextInt();
       char c2=sc.next().charAt(0);
       int f2=sc.nextInt();
       char c3=sc.next().charAt(0);
       int f3=sc.nextInt();
       if(c1=='Y' && f1>=37){
        if((c2=='Y' && f2>=37) || (c3=='Y' && f3>=37)){
            System.out.printf("E");
        }
        else{
            System.out.printf("N");
        }
       }
       else if((c2=='Y' && f2>=37) && (c3=='Y' && f3>=37)){
            System.out.printf("E");
        }
        else{
            System.out.printf("N");
        } // 여기에 코드를 작성해주세요.
    }
}