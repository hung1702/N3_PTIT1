 //Phan tich thua so nguyen to
 #include<bits/stdc++.h>
 using namespace std;

 void ThuaSoNTo(long long n){
 	cout<<"1 x ";
	//chay tu 2 -> sqrt(n): so i nho nhat ma n chia het se la so ngto
	for(long i=2;i<=sqrt(n);i++){	
		int dem=0;
 		while(n%i==0){
 			dem++;
 			n/=i;
		}
		//neu dem != 0 thi in ra cac thua so ngto + so mu (dem)
		if(dem!=0){					
			//neu n == 1 thi ko in dau "x" o cuoi va thoat vong for
			if(n==1){				
				cout<<i<<"^"<<dem;
				break;	
			}
			//neu ko thi in thua so ngto do + so mu(dem) + dau "x";
			else					
				cout<<i<<"^"<<dem<<" x ";
		}	
	}
	//ket qua n sau vong for = 1 hoac = 1 so ngto 
 	if(n!=1)						
 		cout<<n<<"^1";		//chi can in so ngto cuoi cung
 	cout<<"\n";
 }
 
 int main(){
 	cout<<"Nhap so bo test t = ";
 	int t;
	cin>>t;
	while(t--){
		cout<<"Nhap 1 so can phan tich thua so nguyen to \nx = ";
	 	long long n;
	 	cin>>n;
	 	if(n<2)
	 		cout<<n<<" ko the phan tich thua so nguyen to";
	 	else
	 		ThuaSoNTo(n);	
	}
 	return 0;
 }




// giả mã
//  void ThuaSoNTo(long long n){
// 	//chay tu 2 -> sqrt(n): so i nho nhat ma n chia het se la so ngto
// 	for(long i=2;i<=sqrt(n);i++) {	
// 		int dem=0;
//  		while(n%i==0){
//  			dem++;
//  			n/=i;
// 		}
// 		//neu dem != 0 thi in ra cac thua so ngto + so mu (dem)
// 		if(dem!=0){					
// 			cout<<i<<"^"<<dem<<" x ";
// 		}	
// 	}
// 	//ket qua n sau vong for = 1 hoac = 1 so ngto 
//  	if(n!=1)						
//  		cout<<n<<"^1";		//chi can in so ngto cuoi cung
//  }