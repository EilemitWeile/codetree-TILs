import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        while(true){
            int w=sc.nextInt();
            int h=sc.nextInt();
            char a=sc.next().charAt(0);

            System.out.printf("%d\n", w*h);

            if (a=='C'){
                break;
            }
        } // 여기에 코드를 작성해주세요.
    }
}