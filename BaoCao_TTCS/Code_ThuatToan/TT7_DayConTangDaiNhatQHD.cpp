//TT7: Day con tang dai nhat (QHD)
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int daycontang(int a[],int n){
	int i,j,f[n];
	for(i=0;i<n;i++)
		f[i]=1;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(a[j]<a[i]){
				f[i]=max(f[i],f[j]+1);
			}
		}		
	}
	sort(f,f+n);
	return f[n-1];
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
		cout<<daycontang(a,n)<<endl;
	}
	return 0;
}

/*    //https://vietcodes.github.io/algo/lis


giả mã:

int result = 1;
for (int i=1; i<=n; i++) {
    f[i] = 0;
    for (int j=0; j<i; j++) if (a[j] < a[i]) {
        f[i] = max(f[i], f[j] + 1);
    }
    result = max(result, f[i]);
}*/
