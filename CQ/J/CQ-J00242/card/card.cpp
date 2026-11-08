#include <bits/stdc++.h>
using namespace std;
long long n,m;
long long ans[300005],card[500005],f[300005],s[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>card[i];
	for(int k=1;k<=n;k++){
		for(int i=1;i<=m;i++) f[i]=0;
		int cnt=0;
		for(int i=k;i<=n;i++){
			if(f[card[i]]==1){
				while(s[cnt]!=card[i]){
					f[s[cnt]]=0;
					s[cnt]=0;cnt--;
				}
				continue;
			}
			else{
				s[++cnt]=card[i];
				f[card[i]]=1;
			}
		}
		for(int i=1;i<=cnt;i++)ans[s[i]]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
