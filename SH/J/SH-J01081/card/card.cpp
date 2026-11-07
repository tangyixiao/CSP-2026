#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],ans[300010],b[500010],fl[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int cnt=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(fl,0,sizeof(fl));
		cnt=0;
		for(int j=i;j<=n;j++){
			if(fl[a[j]]==0){
				cnt++;
				b[cnt]=a[j];
                fl[a[j]]=cnt;
			}
			else {
				cnt=fl[a[j]];
			}
		}
		for(int j=1;j<=cnt;j++){
			ans[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
