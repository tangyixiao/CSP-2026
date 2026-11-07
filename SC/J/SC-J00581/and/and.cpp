#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+6,B=32;
int n,k,a[N],num[B+3],tj[N][B+3],qp[B+3],ans;
bool vis[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>k;
	qp[0]=1;
	for(int i=1;i<B;i++){
		qp[i]=qp[i-1]*2;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int tmp=a[i],v=0;
		while(tmp){
			num[v]+=tmp%2;
			tj[i][v++]=tmp%2;
			tmp/=2;
		}
	}
	int now=B;
	while(1){
		bool fl=0;
		for(int i=now-1;i>=0;i--){
			if(num[i]>=k){
				now=i;
				fl=1;
				break;
			}
		}
		if(!fl)break;
		ans+=qp[now];
		for(int i=1;i<=n;i++){
			if(!tj[i][now]&&!vis[i]){
				for(int j=B-1;j>=0;j--){
					num[j]-=tj[i][j];
				}
				vis[i]=1;
			}
		}
	}
	cout<<ans;
	return 0;
} 
