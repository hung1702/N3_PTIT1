package tt2_phantichthuasontojava;

import java.util.*;

public class TT2_PhanTichThuaSoNToJava {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap so bo test t = ");
        int t = sc.nextInt();
        while (t-- > 0) {
            System.out.print("Nhap 1 so can phan tich thua so nguyen to \nx = ");
            long n = sc.nextLong();
            if (n < 2)
                System.out.print(n + " ko the phan tich thua so nguyen to");
            else 
                ThuaSoNTo(n);
        }
        sc.close();
    }

    public static void ThuaSoNTo(long n) {
        System.out.print("1 x ");
        //chay tu 2 -> sqrt(n): so i nho nhat ma n chia het se la so ngto
        for (long i = 2; i <= Math.sqrt(n); i++) {	
            int dem = 0;
            while (n % i == 0) {
                dem++;
                n /= i;
            }
            //neu dem != 0 thi in ra cac thua so ngto + so mu (dem)
            if (dem != 0) {					
                //neu n == 1 thi ko in dau "x" o cuoi va thoat vong for
                if (n == 1) {				
                    System.out.print(i + "^" + dem);
                    break;
                } 
                //neu ko thi in thua so ngto do + so mu(dem) + dau "x";
                else 
                    System.out.print(i + "^" + dem + " x ");
            }
        }
        //ket qua n sau vong for = 1 hoac = 1 so ngto 
        if (n != 1) 
            System.out.print(n + "^1");		//chi can in so ngto cuoi cung
        System.out.println();
    }
}
