//TT10: Bai toan 8 Quan hau
#include<bits/stdc++.h>
using namespace std;

int a[100];
//ham in ra ket qua
void HienThi(int n){   
    for(int i=1; i<=n; i++)
    	cout<<a[i]<<" ";
    cout<<endl;
}

//ham kiem tra cac TH dat quan hau co t/m ko, tra ve true neu t/m
bool Check(int c, int r){		
    for(int i=1; i<c ;i++)
        if( a[i] == r || abs(a[i]-r) == abs(i-c) )
            return false;
    return true;
}

//ham quy lui quan hau
void Try(int i,int n){
    for(int j=1; j<=n; j++){	//dat hau vao cac cot tu 1 den 8
        if(Check(i, j)){		//neu co the dat thi dat hau vao
            a[i] = j;
            if(i==n) 			//kiem tra du 8 o thi inra
				HienThi(n);
            Try(i+1, n);
        }
    }
}
 
int main(){
	cout<<"Nhap so bo test t = ";
	int t;
	cin>>t;
	while(t--){
		cout<<"Nhap do rong ban co nxn de kiem tra quan hau!\nn = ";
		int n;			//ban co vua la n = 8
		cin>>n;
		cout<<"Vi tri co the dat cac quan Hau theo thu tu la:"<<endl;
		Try(1,n);
    	return 0;
	}
}


//giả mã:

//hàm kiểm tra các trường hợp đặt Hậu có thỏa mãn ko, trả về true nếu thỏa mãn
// bool Check(int c, int r){		
//     for(int i=1; i<c ;i++)
//         if( a[i] == r || abs(a[i]-r) == abs(i-c) )
//             return false;
//     return true;
// }

// //hàm quay lui quân hâu
// void Try(int i,int n){
//     for(int j=1; j<=n; j++){	//đặt ậu vào các cột từ 1 đến 8 
//         if(Check(i, j)){		//nếu có thể thì đặt Hậu vào
//             a[i] = j;
//             if(i==n) 			//kiểm tra đủ n ô thì output kết quả đó
// 				HienThi(n);
//             Try(i+1, n);        //tiếp tục quay lui các trường hợp khác
//         }   
//     }
// }

//https://nguyenvanhieu.vn/bai-toan-xep-hau/