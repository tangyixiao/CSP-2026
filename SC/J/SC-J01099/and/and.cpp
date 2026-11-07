#include<bits/stdc++.h>
using namespace std;
long long a[200005],c[200005];
int lll(int x){//转二进制 
	if(x==0)return 0;
	return lll(x/2)*10+(x%2);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
/*	int a,b;
	cin>>a>>b;
	cout<<(a&b);*/
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
		return 0;
	}
	if(m==2){
		long long mx=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(mx,(a[i]&a[j]));
			}
		}
		cout<<mx;
		return 0;
	}
	if(m==n){
		long long x=0;
		for(int i=1;i<=n;i++)x=x&a[i];
		cout<<x;
		return 0;
	} 
	sort(a+1,a+1+n);
	cout<<(a[n]&a[n-1]&a[n-2]);
	return 0;
}
//C