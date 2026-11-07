#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int a[N],p[N][31],vis[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,cnt=0,sum=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)vis[i]=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int s=a[i],e=0;
		while(s>0){
			p[i][e]=s%2;
			s/=2;e++;
		}cnt=max(cnt,e-1);
	}int q=pow(2,cnt),ok=0;
	for(int i=cnt;i>=0;i--){
		int u=0;
		for(int j=1;j<=n;j++){
			if(p[j][i]==1 and vis[j]==1)u++;
			else if(p[j][i]==0 and ok==1)vis[j]=0;
		}if(u>=m)sum+=q,ok=1;
		q/=2;
	}cout<<sum;
	return 0;
}