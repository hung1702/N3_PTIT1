//TT: Sang nguyen to
#include<bits/stdc++.h>
using namespace std;

void SangNguyenTo(int n){
	bool sang[n+1];
	for(int i=0;i<=n;i++)
		sang[i]=true;
	sang[0]=sang[1]=false;

	for(i=2;i<=sqrt(n);i++){
		if(sang[i]==true){
			for(int j=2; j<=n/i;j++)
				sang[i*j]=false;
		}
	}
	
	for(i=0;i<=n;i++){
		if(sang[i]==true)
			cout<<i<<" ";
	}
	cout<<endl;
}

int main(){
	cout<<"Nhap so bo test t = ";
	int t;
	cin>>t;
	while(t--){
		cout<<"Nhap n = ";
		int n;
		cin>>n;
		cout<<"Sang nguyen to tu 0 den "<<n<<" la:"<<endl;
		SangNguyenTo(n);
	}
	return 0;
}


//giả mã

// void SangNguyenTo(int n){
// 	bool sang[n+1];
// 	//đánh dấu tất cả các ptử mảng = true là số nguyên tố, loại bỏ ptử thứ 0 và 1
// 	for(int i=0; i<=n; i++)
// 		sang[i]=true;
// 	sang[0]=sang[1]=false;
	
// 	//xét lần lượt các ptu mảng được đánh dấu.
// 	for(i=2; i<=sqrt(n); i++){
// 		if(sang[i]==true){
// 			//nếu ptu hien tai = true là số nguyên tố 
// 			//thì tất cả ptu 2*i, 3*i, ... ko la số ngtố, đánh dâu là false
// 			for(int j=2; j<=n/i; j++)
// 				sang[i*j]=false;
// 		}
// 	}
// 	//sau khi sàng kết thúc, các ptu = true sẽ là các số nguyên tố
// 	for(i=0;i<=n;i++){
// 		if(sang[i]==true)
// 			cout<<i<<" ";
// 	}
// }

//https://vnoi.info/wiki/translate/he/Number-Theory-2.md