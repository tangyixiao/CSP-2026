#include<bits/stdc++.h>
using namespace std;
int n,a[5001],mx=0,ans=0;
int m;
void dfs(int x,int cnt,int s){
	if(cnt==m||s>=n){
		ans=max(x,ans);
		return;
	}
	dfs(x&a[s],++cnt,++s);
	//dfs(x,cnt,++s);
}
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	if(m==1){
		cout<<mx;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=1;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	else if(n<=20){
		dfs(1<<20-1,0,1);
		cout<<ans; return 0;
	}else{
		bool fff=0;
		for(int i=1;i<=n;i++){
			if(a[i]%2==0){
				fff=1;
			}
		}
		if(!fff){
			sort(a+1,a+1+n,cmp);
			cout<<a[m];
			return 0;
		}else{
			cout<<0;
			return 0;
		}
		
	}
	return 0;
}
