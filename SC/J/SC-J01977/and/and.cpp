#include<bits/stdc++.h>
using namespace std;
unsigned long long n,m,a[200010],p,ans,maxa,l;
bool f;
bool b[200010];
void dfs(unsigned long long v,int c){
	if(c==m){
		ans=max(ans,v);
		return;
	}
	for(int i=1;i<=n;i++){
		if(b[i])continue;
		b[i]=1;
		dfs(v&a[i],c+1);
		b[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxa=max(maxa,a[i]);
	}
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
		return 0;
	} 
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	else{
		sort(a+1,a+1+n);
		p=1,l=1;
		for(;p<=maxa;p*=2){
			if(a[l]!=p-1){
				f=1;
				break;
			}
		}
		if(!f){
			ans=a[n];
			for(int i=1;i<m;i++){
				ans&=a[n-i];
			}
			cout<<ans;
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		b[i]=1;
		dfs(a[i],1);
	}
	cout<<ans;
//	p=1;
//	for(int j=0;j<=40;j++){
//		for(int i=1;i<=n;i++){
//			if(a[i]&p){
//				
//			}
//		}
//		p*=2;
//	}
	return 0;
}