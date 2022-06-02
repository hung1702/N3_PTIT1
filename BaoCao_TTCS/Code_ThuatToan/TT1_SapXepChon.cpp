//Sap xep chon
#include<bits/stdc++.h>
using namespace std;
void SapXepChon(int arr[], int n){
	int buoc=1;
	for(int i=0;i<n-1;i++){
		int min=arr[i], vtri=i;
		//tim ptu nho nhat trong mang va lay gatri
		for(int j=i+1;j<n;j++){		
			if(arr[j]<min){
				min=arr[j];
				vtri=j;
			}
		}
		//doi cho ptu nho nhat cho ptu hien tai va tiep tuc xet tuong tu
		int tmp=arr[i];					
		arr[i]=arr[vtri];
		arr[vtri]=tmp;
		cout<<"Buoc "<<buoc<<": ";
		for(int k=0;k<n;k++){
			cout<<arr[k]<<" ";
		}
		cout<<"\n";
		buoc++;
	}
}

int main(){
	int t;
	cout<<"Nhap so bo test t = ";
	cin>>t;
	while(t--){
		int n;
		cout<<"Nhap so pt mang n = ";
		cin>>n;
		int arr[n+1];
		cout<<"Nhap vao lan luot cac phan tu mang:\n";
		for(int i=0;i<n;i++)
			cin>>arr[i];
		SapXepChon(arr,n);
	}
	return 0;
}




// giả mã

void selectionSort(int arr[], int n) {
    int i, j, vtriMin;
    // Di chuyển ranh giới của mảng đã sắp xếp và chưa sắp xếp
    for (i = 0; i < n-1; i++) {
    	// Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
		vtriMin = i;
		for (j = i+1; j < n; j++) {
			if (arr[j] < arr[vtriMin])
				vtriMin = j;
		}
		// Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên
		swap(arr[vtriMin], arr[i]);
	}
}