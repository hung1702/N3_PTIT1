using System;
namespace TT5_SinhToHopNguocCS
{
    class Program
    {
        static int[] a =new int[500];
        static bool dd;
        public static void Main(string[] args)
        {
            Console.Write("Nhap so bo test t = ");
            int t = Convert.ToInt32(Console.ReadLine());
            while (t-- > 0)
            {
                Console.Write("Nhap n = ");
                int n = Convert.ToInt32(Console.ReadLine());
                int k = Convert.ToInt32(Console.ReadLine());
                Solve(n, k);
            }
        }

        public static void HienThi(int[] a, int k)
        {
            for (int i = 1; i <= k; i++)
                Console.Write(a[i]);
            Console.Write(" ");
        }

        public static void SinhToHopNGUOC(int[] a, int n, int k)
        {
            int i = k, tmp = n;
            while (a[i] == a[i - 1] + 1)            //vd: 345 -> 5=4+1, 4=3+1, 3 thi lay // 3->2 // 5->5, 4->4
            {                   
                i--;
                if (i == 1)
                    break;
            }
            if (i == 1 && a[1] == 1)                 //vd: 123 -> i=1 && a[1]==1 thi dd=false de stop
                dd = false;
            else
            {
                a[i]--;
                for (int j = k; j > i; j--)
                {
                    a[j] = tmp;
                    tmp--;
                }
            }
        }

        public static void Solve(int n, int k)
        {
            if (k > n)
                Console.WriteLine("n va k nhap vao ko the sinh to hop nguoc!");
            else
            {
                Console.WriteLine("Sinh to hop nguoc chap {0} cua {1} la:", k, n);
                a[0] = -1;                          //a[0]ko can dung toi, loai bo truong hop a[0] = 0
                for (int i = 1; i <= k; i++)                //vd: n=5, k=3 => khoi tao a=[3, 4, 5]
                    a[i] = n - k + i;
                dd = true;
                while (dd)
                {                           //ket thuc vong lap khi dd = false
                    HienThi(a, k);
                    SinhToHopNGUOC(a, n, k);
                }
                Console.WriteLine();
            }
        }

    }
}
