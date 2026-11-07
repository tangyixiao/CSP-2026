#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m,a[N],s[N],mx;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	mx=a[n];
	for(int i=n-m+1;i<n;i++){
		mx=mx&a[i];
	}
	cout<<mx;
//	s[1]=a[1];
//	for(int i=2;i<=n;i++){
//		s[i]=s[i-1]&a[i];
//	}	
//	cout<<s[n]<<"\n";
//	for(int i=m;i<=n;i++){
//		s[i]=s[i]|s[i-m];
//		cout<<s[i]<<"\n";
//		mx=(mx,s[i]);
//	}
//	
	return 0;
}
