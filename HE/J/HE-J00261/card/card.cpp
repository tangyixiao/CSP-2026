#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005],c[500005],ans[300005];
//数据大了都不输出了...... 
int main(){
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int k=1;k<=n;k++){
		for(int i=k;i<=n;i++){
			if(b[a[i]]==1){
				for(int j=c[a[i]];j<i;j++){
					b[a[j]]=0;
				}
			}
			b[a[i]]=1;
			c[a[i]]=i;
		}
		for(int i=1;i<=m;i++){
			ans[i]+=b[i];
			b[i]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
