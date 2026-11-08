#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
void dfs(int x,int num,int h){
	if(x==n){
		if(num!=m){
			return;
		}
		ans=max(ans,h);
		return;
	}
	dfs(x+1,num,h);
	if(num!=m){
		if(h==0){
			h=a[x];
		}
		dfs(x+1,num+1,h&a[x]);
	}
}
int main(){
	ios::sync_with_stdio(false);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
//		cout<<1<<"\n";
		int ma=0;
		for(int i=0;i<n;i++){
			ma=max(ma,a[i]);
		}
		cout<<ma;
	}else if(m==n){
//		cout<<2<<"\n";
		for(int i=0;i<n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}else if(n<=30){
//		cout<<3<<"\n";
		dfs(0,0,0);
		cout<<ans;
	}else{
//		cout<<4<<"\n";
		sort(a,a+n,greater<int>());
		for(int i=0;i<m;i++){
			ans&=a[i];
		}
		cout<<ans;
	}
	return 0;
}

