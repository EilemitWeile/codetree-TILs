import java.util.Scanner;

public class Main {
    
    // 1번 쿼리: 배열의 a번째 요소 출력
    static void q_1(int[] arr, int a) {
        System.out.println(arr[a - 1]);
    }

    // 2번 쿼리: 배열에서 b 값을 찾아 그 인덱스 출력, 없으면 0 출력
    static void q_2(int[] arr, int n, int b) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == b) {
                System.out.println(i + 1);  // 1-based 인덱스 출력
                return;
            }
        }
        System.out.println("0");
    }

    // 3번 쿼리: s부터 e까지의 배열 값 출력
    static void q_3(int[] arr, int s, int e) {
        for (int i = s - 1; i < e; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // n: 배열의 크기, q: 쿼리의 개수
        int n = sc.nextInt();
        int q = sc.nextInt();
        int[] arr = new int[n];
        
        // 배열 입력 받기
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        
        // 쿼리 처리
        for (int i = 0; i < q; i++) {
            int ans = sc.nextInt();
            
            if (ans == 1) {
                int a = sc.nextInt();
                q_1(arr, a);
            } else if (ans == 2) {
                int b = sc.nextInt();
                q_2(arr, n, b);
            } else if (ans == 3) {
                int s = sc.nextInt();
                int e = sc.nextInt();
                q_3(arr, s, e);
            }
        }

        sc.close();
    }
}