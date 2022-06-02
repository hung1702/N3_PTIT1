using System;
namespace TT6_SinhHoanViCS
{
    class Program
    {
        static int[] a = new int[100];
        static int dd;
        static void Main(string[] args)
        {
            Console.Write("Nhap so bo test t = ");
            int t = Convert.ToInt32(Console.ReadLine());
            while (t-- > 0) 
            {
                Console.Write("Nhap 1 chuoi can hoan vi (0 < length < 15) \nString = ");
                string str = Console.ReadLine();
                int n = str.Length;
                if (n > 0 && n < 15)
                {
                    Console.WriteLine("Chuoi sau khi duoc hoan vi lan luot la:");
                    for (int i = 1; i <= n; i++)
                        a[i] = i;
                    dd = 1;
                    while (dd == 1)
                    {
                        HienThi(str, a, n);
                        SinhHoanVi(a, n);
                    }
                }
                else
                    Console.WriteLine("Chuoi qua dai, ko the thuc thi");
            }
        }

        public static void HienThi(string str, int[] a, int n)
        {
            for (int i = 1; i <= n; i++)
                Console.Write("{0} ", str[a[i] - 1]);
            Console.WriteLine();
        }

        public static void SinhHoanVi(int[] a, int n)
        {
            int i = n - 1;
            while (a[i] > a[i + 1])
                i--;
            if (i == 0)
                dd = 0;
            else
            {
                int j = n;
                while (a[i] > a[j])
                    j--;
                swap(ref a[i], ref a[j]);
                int l = i + 1, r = n;
                while (l < r)
                {
                    swap(ref a[l], ref a[r]);
                    l++; r--;
                }
            }
        }

        public static void swap(ref int a, ref int b)
        {
            a = a + b;
            b = a - b;
            a = a - b;
        }
    }
}
