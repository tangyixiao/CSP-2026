#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],last[300001],game[500001],nowp,ans[300001],quan[500001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		quan[i]=1;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==a[i-1]){
			i--;
			n--;
			quan[i]++;
		}
	}
	if(n<=5000){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				last[j]=0;
			}
			nowp=0;
			for(int j=i;j<=n;j++){
				if(last[a[j]]!=0){
					for(int k=last[a[j]]+1;k<=nowp;k++){
						last[game[k]]=0;
					}
					nowp=last[a[j]];
				}
				else{
					game[++nowp]=a[j];
					last[a[j]]=nowp;
				}
			}
			for(int j=1;j<=nowp;j++){
				ans[game[j]]+=quan[i];
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' ';
		}
		return 0;
	}
}
