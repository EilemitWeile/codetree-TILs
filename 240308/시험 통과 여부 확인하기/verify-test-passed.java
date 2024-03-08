import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
        int score=sc.nextInt();
        if(score>=80){
            System.out.printf("pass\n");// 여기에 코드를 작성해주세요.
    }
    else{
        System.out.printf("%d more score\n",80-score);
    }
}
}