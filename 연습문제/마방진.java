package array;

import java.util.Scanner;

public class a {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("n값을 입력하세요.");
        int n = sc.nextInt();

        int array[][] = new int [n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int value = i + j + 1;
                int num = value <= n ? value : value - n;
                array[i][j] = num;
                System.out.print(array[i][j] + "  ");
            }
            System.out.println();
        }

        // 가로, 세로 합 검증
        boolean isValid = true;
        int targetSum = 0;

        // 첫 행 합을 기준으로 사용
        for (int j = 0; j < n; j++) {
            targetSum += array[0][j];
        }

        // 행 검사
        for (int i = 0; i < n; i++) {
            int rowSum = 0;
            for (int j = 0; j < n; j++) {
                rowSum += array[i][j];
            }
            if (rowSum != targetSum) {
                isValid = false;
                System.out.println("행 " + i + "의 합이 다릅니다: " + rowSum);
            }
        }

        // 열 검사
        for (int j = 0; j < n; j++) {
            int colSum = 0;
            for (int i = 0; i < n; i++) {
                colSum += array[i][j];
            }
            if (colSum != targetSum) {
                isValid = false;
                System.out.println("열 " + j + "의 합이 다릅니다: " + colSum);
            }
        }

        System.out.println("검증 결과: " + (isValid ? "가로 세로 합이 모두 같습니다!" : "가로 또는 세로 합이 다릅니다."));
    }
}