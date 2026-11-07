#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000005],last[300005],ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int x=1;x<=n;x++){
		memset(last,0,sizeof(last));
		for(int i=x;i<=n;i++){
			if(last[a[i]]==0){
				last[a[i]]=i;
			}
			else{
				for(int j=last[a[i]];j<i;j++){
					last[a[j]]=0;
				}
				last[a[i]]=i;
			}
		}
		for(int i=1;i<=m;i++){
			if(last[i]!=0){
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
