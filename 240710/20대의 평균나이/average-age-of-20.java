import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int sum=0;
        int cnt=0;
        while(true){
            int age=sc.nextInt();
            if((20<=age) && (age<30)){
            sum+=age;
            cnt++;
            continue;
            }
            else//(age>=30)
            System.out.printf("%.2f", (double)sum/cnt);
            break;
        }
            // 여기에 코드를 작성해주세요.
    }
}