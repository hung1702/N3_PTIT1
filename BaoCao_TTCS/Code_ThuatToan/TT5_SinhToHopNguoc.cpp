//TT5 Sinh tổ hợp ngược
#include<bits/stdc++.h>
using namespace std;

int a[500];
bool dd;

void HienThi(int a[],int k){
	for(int i=1;i<=k;i++)
		cout<<a[i];
	cout<<" ";
}

void SinhToHopNGUOC(int a[], int n, int k){	//---ham sinh to hop nguoc
	int i=k, tmp=n;
	while(a[i]==a[i-1]+1){					//vd: 345 -> 5=4+1, 4=3+1, 3 thi lay // 3->2 // 5->5, 4->4
		i--;
		if(i==1)
			break;
	}
	if(i==1 && a[1]==1)						//vd: 123 -> i=1 && a[1]==1 thi dd=false de stop
		dd=false;
	else{
		a[i]--;
		for(int j=k;j>i;j--){
			a[j]=tmp;
			tmp--;
		}
	}
}

void Solve(int n, int k){
	if(k>n)
		cout<<"n va k nhap vao ko the sinh to hop nguoc!"<<endl;
	else{
		cout<<"Sinh to hop nguoc chap "<<k<<" cua "<<n<<" la:"<<endl;
		a[0]=-1;							//a[0]ko can dung toi, loai bo truong hop a[0] = 0
		for(int i=1;i<=k;i++)				//vd: n=5, k=3 => khoi tao a=[3, 4, 5]
			a[i]=n-k+i;
		dd=true;
		while(dd){							//ket thuc vong lap khi dd = false
			HienThi(a, k);
			SinhToHopNGUOC(a, n, k);
		}
		cout<<endl;
	}
}

int main(){
	cout<<"Nhap so bo test t = ";
	int t;
	cin>>t;
	while(t--){
		cout<<"Nhap n = ";
		int n, k;
		cin>>n;
		cout<<"Nhap k = ";
		cin>>k;
		Solve(n, k);
	}
	return 0;
}


////---Ham sinh to hop xuoi
//void SinhToHop(int a[], int n, int k){
//	int i=k;
//	while(a[i]==n-k+i){
//		i--;
//		if(i==0)
//			break;
//	}
//	if(i==0)
//		dd=0;
//	else{
//		a[i]++;
//		for(int j=i+1;j<=k;j++)
//			a[j]=a[j-1]+1;
//	}
//}


// giả mã
// void SinhToHopNGUOC(int arr[], int n, int k){	
// 	int i=k, tmp=n;
// 	//lặp cho tới khi gặp cấu hình kết thúc là arr[1] = 1    
// 	while(arr[i] == arr[i-1]+1){					
// 		i--;
// 	}
// 	//dừng khi lặp hết các phần tử hoặc gặp cấu hình kết thúc arr[1] = 1 
// 	if(i==1 && a[1]==1)						
// 		dd=false;
// 	else{
// 		//nếu ko thì [i] giảm dần
// 		arr[i]--;
// 		//các phần tử sau giảm dần từ phải qua trái
// 		for(int j=k; j>i; j--){
// 			arr[j] = tmp;
// 			tmp--;
// 		}
// 	}
// }