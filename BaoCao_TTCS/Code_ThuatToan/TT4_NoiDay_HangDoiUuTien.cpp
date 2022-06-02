//TT4: Hang doi uu tien (BT noi day)
#include<bits/stdc++.h>
using namespace std;
long long noiday1(int a[],int n){
	priority_queue<int, vector<int>, greater<int> > qu;
	long long i,j,x,x1,x2,ans=0;
	for(i=0;i<n;i++)
		qu.push(a[i]);
	while(qu.size()>1){
		x1=qu.top(); qu.pop();
		x2=qu.top(); qu.pop();
		x=x1+x2;
		ans=ans+x;;
		qu.push(x);
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		long long x=noiday1(a,n);
		cout<<x<<endl;
	}
	return 0;
}


// giả mã
// + Bước 1: Tạo priority_queue pq là hàng đợi ưu tiên tăng dần,
// 		  Lưu trữ tất cả độ dài n dây trong mảng.
// + Bước 2: (Lặp).
// 		OPT = 0; 
// 		while (pq.size() > 1) {
// 			First = pq.top(); 	pq.pop(); 
// 			Second = pq.top(); 	pq.pop(); 
// 			OPT = First + Second; 
// 			pq.push(First + Second);
// 		}
// + Bước 3: (Trả lại kết quả tổng nối dây nhỏ nhất). 
// 		Return(OPT);
