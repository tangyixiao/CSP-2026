#include<bits/stdc++.h>
using namespace std;
const long long N=1e5*5+5;
const long long M=1e5*5+5;
long long n,m,a[N],que[N],ans[M],cnt=0,x;
bool f[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int j=1;j<=n;j++){
		cnt=0;
		for(int i=j;i<=n;i++){
			if(f[a[i]]==0) {
				que[++cnt]=a[i];
				f[a[i]]=1;
			}
			else{
				x=a[i];
				while(1){
					if(que[cnt]==x) break;
					else {
						f[que[cnt]]=0;
						que[cnt]=0;
						cnt--;
					}
				}
			}
		};
		for(int idx=1;idx<=cnt;idx++){
			ans[que[idx]]++;
			f[que[idx]]=0;
			que[idx]=0;
			
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}