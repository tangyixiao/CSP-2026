#include<bits/stdc++.h>
using namespace std;
int a[100001];
int maxx=0;
int n,m;
int o(int sum,int cnt,int name){
	if(cnt==m){
		maxx=max(maxx,sum);
		return 0;
	}
	for(int i=name+1;i<=n;i++){
		int l=sum&a[i];
		
		o(l,++cnt,i);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		o(a[i],1,i);
	}
	cout<<maxx;
	return 0;
}

