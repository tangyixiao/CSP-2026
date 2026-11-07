#include<bits/stdc++.h>
using namespace std; 
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	long long maxn=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			maxn=max(maxn,a[i]);	
		}
		cout<<maxn;
		return 0;
	}
	if(m==n){
		long long q=a[1];
		for(int i=2;i<=n;i++){
			q&=a[i];
		}
		cout<<q;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			maxn=max(maxn,a[i]&a[j]);
		}
	}
	cout<<maxn;
}

