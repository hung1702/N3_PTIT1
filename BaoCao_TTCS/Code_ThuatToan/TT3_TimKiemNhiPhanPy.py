#TT3_TimKiemNhiPhan
def TKNhiPhan(arr, n, x):    #ham tim kiem nhi phan (chat nhi phan)
    l=0
    r=n-1
    while(l<=r):
        m=int((l+r)/2)
        if(x==arr[m]):
            return m
        elif (x<arr[m]):
            r=m-1
        else:
            l=m+1
    return -1

print("Nhap so bo test t = ", end="")
t=int(input())
while(t>0):
    t=t-1
    print("Nhap so ptu mang \nn = ", end="")
    n=int(input())
    print("Nhap lan luot cac ptu cua mang:")
    arr=[]
    for i in range(n):
        arr.append(int(input()))
    print("Nhap phan tu can tim kiem trong mang: \nx = ", end="")
    x=int(input())

    print("Mang sau khi duoc sap xep la:")
    arr.sort()
    for i in range(n):
        print(arr[i], end=" ")
    print()

    ans = TKNhiPhan(arr, n, x)
    if(ans==-1):
        print(x, "ko xuat hien trong mang can tim", sep=" ")
    else:
        print(x,"nam o vi tri thu", ans+1, "trong mang can tim", sep=" ")

