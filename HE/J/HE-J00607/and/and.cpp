#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],maxn=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(m==1){
		for(int i=1;i<=n;i++) maxn=max(maxn,a[i]);
	}
	else if(m==2){
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				maxn=max(maxn,a[i]&a[j]);
	}
	else if(m==n){
		for(int i=2;i<=n;i++)
			maxn=a[i]&a[i-1];
	}
	cout<<maxn;
	return 0;
} 
