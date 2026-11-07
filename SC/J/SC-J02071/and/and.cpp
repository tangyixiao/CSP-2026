#include<bits/stdc++.h>
using namespace std;
int n,m,zls=0;
int a[200005];
int f[200005];
bool v[200005];
int ans=0,bb;
void go(int c,int p){
	if(p<ans){
		return;
	}
	if(c==m){
		ans=max(ans,p);
		return;
	}
	for(int j=1;j<=n;j++){
		if(v[j]==0){
			v[j]=1;
			if(c==0){
				go(c+1,a[j]);
			}else{
				go(c+1,p&a[j]);
			}
			v[j]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
	}else{
		go(0,0);
	}
	cout<<ans;
	return 0;
}