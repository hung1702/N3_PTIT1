//Sinh hoan vi
#include<bits/stdc++.h>
using namespace std;
int dd, a[100];
void SinhHoanVi(int a[], int n){
	int i=n-1;
	while(a[i]>a[i+1])
		i--;
	if(i==0)
		dd=0;
	else{
		int j=n;
		while(a[i]>a[j])
			j--;
		swap(a[i], a[j]);
		int l=i+1, r=n;
		while(l<r){
			swap(a[l], a[r]);
			l++; r--;
		}
	}
}

void HienThi(string str, int a[], int n){
	for(int i=1;i<=n;i++)
		cout<<str[a[i]-1]<<" ";
	cout<<endl;
}

int main(){
	cout<<"Nhap so bo test t = ";
	int t;
	cin>>t;
	while(t--){
		cout<<"Nhap 1 chuoi can hoan vi (0 < length < 15)\nstring = ";
		string str;
		cin>>str;
		int n=str.length();
		//cin>>n;
		if(n>0 && n<15){
			cout<<"Chuoi sau khi duoc hoan vi lan luot la:"<<endl;
			for(int i=1;i<=n;i++)
				a[i]=i;
			dd=1;
			while(dd==1){
				HienThi(str,a,n);
				SinhHoanVi(a,n);
			}	
		}
		else
			cout<<"Chuoi qua dai, ko the thuc thi"<<endl;
	}
	return 0;
}



// giả mã

// void SinhHoanVi(int arr[], int n){
// 	int i = n-1;
// 	//cấu hình kết thúc khi arr[1] = n
// 	//vòng lặp so sánh từ phải qua trái tìm vị trí đứng trước bé hơn đứng sau
// 	while(arr[i] > arr[i+1])
// 		i--;
// 	//dừng khi là phần tử cuối cùng hoặc arr[1] = n
// 	if(i==0)
// 		dd=0;
// 	else{
// 		int j=n;
// 		//tìm vị trí bên phải arr[i] lớn hơn nhỏ nhất so với arr[i] 
// 		//để đối chỗ với arr[i]
// 		while(arr[i] > arr[j])
// 			j--;
// 		swap(arr[i], arr[j]);
// 		int l=i+1, r=n;
// 		//đảo ngược mảng trong đoạn bên phải so với arr[i]
// 		while(l<r){
// 			swap(arr[l], arr[r]);
// 			l++; r--;
// 		}
// 	}
// }