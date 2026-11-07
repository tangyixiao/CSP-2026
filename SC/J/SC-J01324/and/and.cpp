#include<iostream>
#include<cstdio>
using namespace std;
const int N=2e5+5;
bool k[N][35];
int n,m,a[N];
int vis[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		vis[i]=1;
		int r=a[i],w=0;
		while(r){
			k[i][w++]=r%2;
			r/=2;
		}
	}
	for(int l=31;l>=0;l--){
		int cnt=0;
		for(int i=1;i<=n;i++)
			if(vis[i]&&k[i][l])cnt++;
		if(cnt>=m)
			for(int i=1;i<=n;i++)
				if(!k[i][l])vis[i]=0;
	}
	long long sum=((long long)1<<32)-1;
	for(int i=1;i<=n;i++)
		if(vis[i]==1)sum=sum&a[i];
	cout<<sum;
	return 0;
}