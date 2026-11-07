#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5; 
int n,m;
int minn;
int a[N];
int f[31];
int ans;
bool cmd(int x,int y){
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmd);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	if(a[1]==a[2]+1){
		for(int i=2;i<=m+1;++i){
		int cnt=1;
		while(a[i]!=0){
			if(a[i]%2==0) f[cnt]=1;
			a[i]/=2;
			cnt++;
		}
		minn=cnt;
		}
	}
	else{
		for(int i=1;i<=m;++i){
		int cnt=1;
		while(a[i]!=0){
			if(a[i]%2==0) f[cnt]=1;
			a[i]/=2;
			cnt++;
		}
		minn=cnt;
		}
	}
	for(int i=minn-1;i>=1;--i){ 
		if(f[i]==0)
		ans+=pow(2,i-1);
	}
	cout<<ans;
	return 0;
}

