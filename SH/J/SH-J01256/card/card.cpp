#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200009],cnt[3009];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		int s[200009],back=0;
		bool is[3009];
		for(int j=1;j<=m;j++) is[j]=0;
		for(int j=i;j<=n;j++){
			if(is[a[j]]){
				while(1){
					if(s[back]==a[j]) break;
					is[s[back]]=0;back--;
				}
			}else{
				s[++back]=a[j];
				is[a[j]]=1;
			}
		}
		int cnt_cf=1;
		while(a[i]==a[i+1])
			cnt_cf++,i++;
		for(int j=1;j<=m;j++)
			if(is[j]) cnt[j]+=cnt_cf;
	}
	for(int i=1;i<=m;i++)
		cout<<cnt[i]<<" ";
	return 0;
}
