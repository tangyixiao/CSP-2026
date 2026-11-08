#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
struct p{
	int t,n,m;
};
int bfs(int x,int y){
	int f=0;
	queue<p>q;
	for(int i=0;i<=x-y;i++)	q.push({a[i],i,y-1});
	while(!q.empty()){
		p u=q.front();q.pop();
		if(u.m==0)	f=max(f,u.t);
		else{
			for(int i=u.n+1;i<=x;i++){
				q.push({u.t&a[i],i,u.m-1});
			}
		}
	}
	return f;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	bool b1=true,b2=true;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b1&=(a[i]<4);
	}
	if(m==1){
		int x=0;
		for(int i=0;i<n;i++)	x=max(x,a[i]);
		cout<<x;
		return 0;
	}
	if(m==n){
		int x=(1<<30)-1;
		for(int i=0;i<n;i++)	x&=a[i];
		cout<<x;
		return 0;
	}
	if(m==2){
		int x=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				x=max(x,a[i]&a[j]);
			}
		}
		cout<<x;
		return 0;
	}
	if(b1){
		int x=0,y=0;
		for(int i=0;i<n-1;i++){
			if(a[i]==3)	x++;
			if(a[i]==2)	y++;
		}
		if(x>=m)	cout<<3;
		else{
			if(y>=m)	cout<<2;
			else{
				if(n-y>=m)	cout<<1;
				else	cout<<0;
			}
		}
		return 0;
	}
	cout<<bfs(n,m);
	return 0;
}
