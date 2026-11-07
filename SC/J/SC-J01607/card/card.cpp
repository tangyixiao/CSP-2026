#include<bits/stdc++.h>
using namespace std;
#define int long long
bool inq[300006];
int n,m,t,a[500006],s[500006],cnt[300006];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<=n;i++){
		t=0;
		memset(inq,0,sizeof inq);
		for(int j=i;j<=n;j++){
			if(!inq[a[j]]) s[++t]=a[j],inq[a[j]]=1;
			else{
				while(t&&s[t]!=a[j]){
					inq[s[t]]=0;
					t--;	
				}
				s[t]=a[j];
				inq[a[j]]=1;
			}
		}
		for(int j=1;j<=t;j++){
//			cout<<s[j]<<' ';
			cnt[s[j]]++;
		}
//		cout<<'\n';
	}
	for(int i=1;i<=m;i++) printf("%lld ",cnt[i]);
	return 0;
}