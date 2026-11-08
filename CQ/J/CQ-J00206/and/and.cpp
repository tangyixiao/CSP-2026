#include<bits/stdc++.h>
using namespace std;
typedef int intt;
#define int long long
const int maxn=2e5+10;
int n,m,a[maxn],c[50],ans;
bool vis[maxn];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];int x=a[i],cnt=0;
		while(x)c[cnt]+=(x%2),x/=2,cnt++;
	}
	for(int i=30;i>=0;i--){
		if(c[i]>=m){
			for(int j=1;j<=n;j++){
				if(!(a[j]&(1<<i))&&!vis[j]){
					int x=a[j],cnt=0;vis[j]=1;
					while(x)c[cnt]-=(x%2),x/=2,cnt++;
				}
			}
			ans+=(1<<i);
		}
	}
	cout<<ans;
	return 0;
}



/*
4 2
3 15 12 12

0011
1111
1100
1100

5 3
31 3 1 15 7

11111
00011
00001
01111
00111
*/ 



