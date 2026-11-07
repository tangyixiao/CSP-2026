#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[500005];
int cnt[300005],ans[300005];
int head=1;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(cnt[a[j]]!=0){
				for(int k=1;k<=m;k++){
					if(cnt[k]<=head&&cnt[k]>cnt[a[j]]){
						cnt[k]=0;
					}
				}
				head=cnt[a[j]];
			}else{
				cnt[a[j]]=++head;
			}
		}
		for(int j=1;j<=m;j++){
			if(cnt[j]!=0){
				ans[j]++;
			}
		}
		memset(cnt,0,sizeof(cnt));
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	
	return 0;
}
