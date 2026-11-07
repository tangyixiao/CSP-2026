#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500001];
int ans[500001];
int temp[500001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int t=1;t<=n;t++){
		int cur=0;
		memset(temp,0,sizeof(temp));
		for(int i=t;i<=n;i++){
			cur++;
			for(int j=1;j<cur;j++){
				if(temp[j]==a[i]){
					cur=j;
					break;
				}
			}
			temp[cur]=a[i];
		}
		for(int i=1;i<=cur;i++) ans[temp[i]]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
