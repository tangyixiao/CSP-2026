#include<bits/stdc++.h>
using namespace std;
int n,m,ans[200010],a[200010],t[200010];
bool flag[200010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		int id=i-1;for(int j=1;j<=id;++j) t[j]=a[j];
		for(int j=i;j<=n;++j){
 			bool b=1;int io=0;
			for(int k=1;k<=id;++k){
				if(t[k]==a[j]){
					b=0;io=k;
					break;
				}
			}
			if(b==1){
				id++;
				t[id]=a[j];
			}
			else{
				id=io;
			}
		}
		for(int j=1;j<=id;++j){
			flag[t[j]]=1;
		}
		for(int j=1;j<=id;++j){
			if(flag[t[j]]==1){
				++ans[t[j]];
				flag[t[j]]=0;
			}
		}
	}
	for(int i=1;i<=m;++i) cout<<ans[i]<<' ';
}
