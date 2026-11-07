#include<bits/stdc++.h>
using namespace std;
int ans,mxans=-1,n,m,a[25];bool t[25],f[25];
void dfs(int x,int ans){
	if(x==m){
		mxans=max(mxans,ans);
	}else if(x==0){
		for(int i=1;i<=n;i++){
			t[i]=1;
			dfs(x+1,a[i]);
			t[i]=0;
		}
	}else{
		for(int i=1;i<=n;i++){
			if(!t[i]){
				t[i]=1;
				dfs(x+1,ans&a[i]);
				t[i]=0;
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n>>m;set<int>sss;
	for(int i=1;i<=n;i++){
		cin>>a[i];sss.insert(a[i]);
		for(int i=1;i<=22;i++){
			if(a[i]==int(pow(2,i))){
				f[1]=1;
			}
		}
	}bool ff=0;int cnt=0;
	for(int i=1;i<=n;i++){
		if(!f[i])break;
		if(i==n)ff=1;
	}
	if(n<=20){
		dfs(0,0);
		cout<<mxans;
	}
	else if(ff){
		for(int num:sss){
			cnt+=num;
		}
		cout<<cnt;
	}
	else{
		sort(a+1,a+1+n);
		cout<<a[n];
	}
	return 0;
}

