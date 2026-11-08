#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=2e5+10;
int a[N],vis[N],ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) {
		scanf("%d",&a[i]);
	}
	for(int i=30;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(vis[j])continue;
			if(((1<<i)&a[j]))
			cnt++;
		}
//		cout<<i<<' '<<cnt<<'\n';
//		cnt++;
		if(cnt>=m){
			for(int j=1;j<=n;j++){   
				if(!((1<<i)&a[j]))vis[j]=1;
			}
			ans|=(1<<i);
		}
	}
	cout<<ans;
	return 0;
} /*
	5 3
 31 3 1 15 7
 */
