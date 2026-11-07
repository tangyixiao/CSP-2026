#include<bits/stdc++.h>
using namespace std;
int n,m;
unsigned long long a[200005],x,y=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	sort(a,a+n+1);
	for(int i=n;i-m>=0;--i){
		x=a[i];
		for(int j=1;j<m;++j){
			x=x&a[i-j];
		}
		if(x>=a[i-m+1]&&x>y){
			cout<<x;
			return 0;
		}
		else y=max(y,x);
	}
	return 0;
}