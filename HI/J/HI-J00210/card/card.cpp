#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int cnt[300005];
int b[300005];
int mp[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int k=0;
		for(int j=i;j<=n;j++){
			if(mp[a[j]]==0){
				k++;
				b[k]=a[j];
				mp[a[j]]++;
			}else{
				bool pan=false;
				int h;
				for(int p=1;p<=k;p++){
					if(b[p]==a[j]){
						pan=true;
						h=p;
					}else if(pan==true){
						mp[b[p]]--;
						b[p]=0;
					}
				}
				k=h;
			}
		}
		for(int j=1;j<=k;j++){
			cnt[b[j]]++;
		}
		memset(mp,0,sizeof(mp));
		memset(b,0,sizeof(b));
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
}
