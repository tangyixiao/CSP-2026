#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n" 
int n,a[200005],mx=INT_MAX,m,s[200005],t[200005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=n;i>n-m;--i){
		mx&=a[i];
	}
	cout<<mx<<endl;
	if(m==2&&n<=2000){
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				if(i==j) continue;
				mx=max(mx,a[i]&a[j]);
			}
		}
	}
	if(m==n-1){
		s[1]=a[1];
		for(int i=2;i<=n;++i) s[i]=s[i-1]&a[i];
		t[n]=a[n];
		for(int i=n;i>=2;--i) t[i]=t[i+1]&a[i];
		for(int i=2;i<n;++i){
			mx=max(mx,s[i-1]&t[i+1]);
		}
		mx=max({mx,t[2],s[n-1]});
	}
	cout<<mx;
	return 0;
}