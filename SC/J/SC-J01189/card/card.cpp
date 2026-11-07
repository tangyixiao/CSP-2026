#include <bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[300010],ans=0,cnt1[500010],cnt[500010];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			b[j]=0;
			cnt1[j]=0;
		}
		for(int j=i;j<=n;j++){
			b[j]=a[j];
			ans++;
			cnt1[b[j]]++;
			if(cnt1[b[j]]>1)
			{
				for(int z=1;z<=ans-1;z++){
					if(b[z]==b[j]){
						for(int p=z;p<=ans-1;p++){
							b[p]=0;
						}
					}
					break;
				}
			}
		}
		for(int j=1;j<=m;j++){
			if(cnt1[j]>0)
			{
				cnt[j]++;
				continue;
			} 
		}
	}
	for(int i=1;i<=m;i++){
		if(cnt[i]>0){
			cout<<cnt[i]<<" ";
		}
	}
	return 0;
}