package tt1_sapxepchon;

import java.util.*;

public class TT1_SapXepChon {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap so bo test t = ");
        int t = sc.nextInt();
        while (t-- > 0) {
            System.out.print("Nhap so pt mang n = ");
            int n = sc.nextInt();
            int arr[] = new int[n + 1];
            System.out.print("Nhap vao lan luot cac phan tu mang:\n");
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            SapXepChon(arr, n);
        }
    }

    public static void SapXepChon(int[] arr, int n) {
        int buoc = 1;
        for (int i = 0; i < n - 1; i++) {
            int min = arr[i], vtri = i;
            //tim ptu nho nhat trong mang va lay gatri
            for (int j = i + 1; j < n; j++) {			
                if (arr[j] < min) {
                    min = arr[j];
                    vtri = j;
                }
            }
            //doi cho ptu nho nhat cho ptu hien tai va tiep tuc xet tuong tu
            int tmp = arr[i];					
            arr[i] = arr[vtri];
            arr[vtri] = tmp;
            System.out.print("Buoc " + buoc + ": ");
            for (int k = 0; k < n; k++) {
                System.out.print(arr[k] + " ");
            }
            System.out.println();
            buoc++;
        }
    }
}
