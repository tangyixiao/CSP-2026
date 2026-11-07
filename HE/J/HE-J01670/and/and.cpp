#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,maxx;
ll a[20005],ans;
int dg(int deep,int v,int idx){
	if(deep==m){
		return v & a[idx];
	}
	int ans=v & a[idx],l=v & a[idx];
	for(int i=idx+1;i<=n;i++){
		l=max(l,dg(deep+1,ans,i));
	}
}
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<dg(1,maxx||(1<<log2(maxx)),1);
	return 0;
}
