#include<bits/stdc++.h>
#define int long long
#define INF 0x3f3f3f3f
#define fi first
#define se second
using namespace std;
const int N=5e5+10;
int n,m,a[N],pre[N],to[N];
bool has[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(pre,0,sizeof pre);
		memset(has,1,sizeof has);
		for(int j=i;j<=n;j++){
			if(pre[a[j]]){
				for(int k=pre[a[j]];k<j;k++){
					has[k]=0;
					pre[a[k]]=0;
				}
			}
			pre[a[j]]=j;
		}
		for(int j=i;j<=n;j++){
			if(has[j]) to[a[j]]++; 
		}
	}
	for(int i=1;i<=m;i++) cout<<to[i]<<" ";
	return 0;
}