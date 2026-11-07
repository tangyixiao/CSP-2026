#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],ans[500005],zm[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int len=0;
	for(int i=1;i<=n;i++){
		len=0;
		memset(zm,0,sizeof(zm));
		for(int k=i;k<=n;k++){
			bool bj=1;
			for(int j=1;j<=len;j++){
				if(zm[j]==a[k])len=j,bj=0;
			}
			if(bj==1){
				zm[len+1]=a[k];
				len++;
			}
		}
		for(int j=1;j<=len;j++){
			ans[zm[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}