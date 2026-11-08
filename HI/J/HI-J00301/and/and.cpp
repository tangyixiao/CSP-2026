#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int const N=2e5+5;
int a[N]; 
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	else if(m==2){
		int x=a[n-1]&a[n];
		cout<<x;
		return 0;
	}
	else if(m==n){
		int y=a[1];
		for(int i=2;i<=n;i++){
			y&=a[i];
		}
		cout<<y;
		return 0;
	}
	else if(m==n-1){
		int x=a[2];
		for(int i=3;i<=n;i++){
			x&=a[i];
		}
		cout<<x;
		return 0;
	}
	else{
		int x=a[m];
		for(int i=m+1;i<=n;i++) x&=a[i];
		cout<<x;
		return 0;
	}
	return 0;
} 
