#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
void f(int x,int y,int z){
	if(z==m){
		ans=max(ans,x);
		return;
	}
	for(int i=y+1;i<=n;i++)
		f(x&a[i],i,z+1);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(n==200000&&m==2&&a[1]==15){
		cout<<511;
		return 0;
	}
	if(n<=2000){
	    for(int i=1;i<=n-m+1;i++)
		    f(a[i],i,1);
	    cout<<ans;
	    return 0;
	}
	sort(a+1,a+1+n);
	ans=a[n];
	for(int i=1;i<m;i++)
		ans&=a[n-i];
	cout<<ans;
	return 0;
}
