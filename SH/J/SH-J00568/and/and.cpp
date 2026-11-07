#include<bits/stdc++.h>
using namespace std;
bool g[200010][40],book[200010];
long long p[40];
void bin(int idx,int x){
	stack<int> q;
	int l=0;
	while(x){
		l++;
		q.push(x%2);
		x/=2;
	}
	for(int i=l;i>0;i--){
		int y=q.top();q.pop();
		g[idx][i]=y;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	p[0]=1;
	for(int i=1;i<=30;i++){
		p[i]=p[i-1]*2;
	}
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		bin(i,x);
	}
	long long ans=0;
	for(int i=30;i>=1;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(!book[j]){
				if(g[j][i]) cnt++;
			}
		}
		if(cnt>=m){
			ans+=p[i-1];
			for(int j=1;j<=n;j++){
				if(!g[j][i]) book[j]=1;
			}
		}
	}
	cout<<ans;
	return 0;
}
