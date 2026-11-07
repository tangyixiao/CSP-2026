#include<bits/stdc++.h>
using namespace std;
int a[200005];
int n,m;
int dfs(int x,int y,int z){
	if(z==m){
		return y;
	}
	if(x==n+1){
		return -1;
	}
	return max(dfs(x+1,y&a[x],z+1),dfs(x+1,y,z));
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool f=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(f && a[i]!=i-1){
			f=false;
		}
	}
	if(m==1){
		int ma=-1;
		for(int i=1;i<=n;i++){
			ma=max(a[i],ma);
		}
		cout<<ma;
	}else if(m==n){
		int cnt=a[1];
		for(int i=2;i<=n;i++){
			cnt=cnt&a[i];
		}
		cout<<cnt;
	}else if(m==2){
		int ma=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ma=max(ma,a[i]&a[j]);
			}
		}
		cout<<ma;
	}else if(n<=20){
		cout<<dfs(1,INT_MAX,0);
	}else if(m==n-1){
		sort(a+1,a+1+n);
		int cnt=a[2];
		for(int i=3;i<=n;i++){
			cnt=cnt&a[i];
		}
		cout<<cnt;
	}else if(f){
		int t=0;
		while(n!=1){
			n/=2;
			t++;
		}
		if(m<=t){
			int cnt=a[n];
  			for(int i=1;i<=m;i++){
				cnt-=pow(2,i);
			}
			cout<<cnt;
		}else cout<<0;
	}else{
		sort(a+1,a+1+n);
		int cnt=a[n-1];
		for(int i=2;i<=m;i++){
			cnt=cnt&a[n-i];
		}
		cout<<cnt;
	}
	return 0;
}