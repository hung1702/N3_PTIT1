//Tim kiem nhi phan
#include<bits/stdc++.h>
using namespace std;

int TKNhiPhan(int a[], int n, int x){
	int l=0, r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(x==a[m])
			return m;
		else if(x<a[m])
			r=m-1;
		else
			l=m+1;
	}
	return -1;
}
int main(){
	cout<<"Nhap so bo test t = ";
	int t;
	cin>>t;
	while(t--){
		cout<<"Nhap so ptu mang \nn = ";
		int n, x;
		cin>>n;
		cout<<"Nhap lan luot cac ptu cua mang:\n";
		int a[n+1];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<"Nhap phan tu can tim kiem trong mang: \nx = ";
		cin>>x;
		
		cout<<"Mang sau khi duoc sap xep:\n";
		sort(a, a + n);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		
		int ans = TKNhiPhan(a, n, x);
		if(ans==-1)
			cout<<x<<" ko xuat hien trong mang can tim"<<endl;
		else
			cout<<x<<" nam o vi tri thu "<<ans+1<<" trong mang can tim"<<endl;
		cout<<endl;
	}
	return 0;
}



// giả mã
// int TKNhiPhan(int arr[], int n, int xCanTim){
// 	int left = 0, right = n-1;
// 	while(left <= right){
// 		//mid là vi tri chia đôi của mảng
// 		int mid = (leftl + right)/2;
// 		if(xCanTim == arr[mid])
// 			return mid;
// 		else if(xCanTim < arr[mid])
// 			right = mid-1;
// 		else
// 			left = mid+1;
// 	}
// 	return -1;
// }