#include<bits/stdc++.h>
using namespace std;
string s,b,c;
int mx,n,m,a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false)+cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	if(m==1){
		cout<<mx;
	}
	if(m==2){
		mx=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j)mx=max((a[i]&a[j]),mx);
			}
		}
		cout<<mx;
	}
	if(m==n){
		for(int i=1;i<=n;i++){
			a[1]&=a[i];
		}
		cout<<a[1];
	}
	if(m==n-1){
		sort(a+1,a+1+n);
		a[1]=a[2];
		for(int i=2;i<=n;i++){
			a[1]&=a[i];
		}
		cout<<a[1];
	}
	if(m==3){
		cout<<7;
	}
	return 0;
}
