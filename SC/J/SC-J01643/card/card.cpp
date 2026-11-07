#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int ans[300010];
int p[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(p,0,sizeof(p));
		for(int j=i;j<=n;j++){
			if(p[a[j]]!=0){
				for(int k=p[a[j]];k<j;k++){
					p[a[k]]=0;
				}
			}
			p[a[j]]=j;
//			for(int k=1;k<=m;k++){
//				cout<<p[k]<<" ";
//			}
//			cout<<endl;
		}
//		cout<<i<<"********";
		for(int k=1;k<=m;k++){
			if(p[k]!=0){
				ans[k]++;
//				cout<<k<<" ";
			}
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}