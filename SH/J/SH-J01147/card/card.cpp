#include<bits/stdc++.h>
using namespace std;
int a[500005],ans[500005],rst[500005];
bool flag[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int t=1;t<=n;t++){
		memset(ans,0,sizeof(ans));
		memset(flag,0,sizeof(flag));
		for(int i=1;i<=n-t+1;i++){
			if(ans[a[i]]>0){
				for(int j=i-1;j>=1;j--){
					if(flag[j]==0){
						ans[a[j]]--;
						flag[j]=1;
						if(a[j]==a[i])break;
					}
				}
			}
			ans[a[i]]++;
		}
		for(int i=1;i<=m;i++){
			if(ans[i]>0)rst[i]++;
		}
		for(int i=2;i<=n-t+1;i++)a[i-1]=a[i];
		a[n-t+1]=0;
	}	
	for(int i=1;i<=m;i++)cout<<rst[i]<<" ";
	return 0;
}
