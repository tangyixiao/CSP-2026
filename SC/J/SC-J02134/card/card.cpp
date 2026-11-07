#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int b[200005]={0},c=i;
		bool is[200005]={0};
		for(int j=i;j<=n;j++){
			if(b[a[j]]==1){
				c=j;
				for(int k=1;k<=c;k++){
					b[a[k]]=0;
					is[a[k]]=0;
				}
			}else{
				b[a[j]]++;
			}
		}
		for(int j=c;j<=n;j++){
			if(!is[a[j]]){
				ans[a[j]]++;
				is[a[j]];
			}
		}
	}
	for(int i=1;i<m;i++){
		cout<<ans[i]<<' ';
	}
	cout<<ans[m];
	return 0;
}