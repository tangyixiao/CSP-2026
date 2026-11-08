#include<bits/stdc++.h>
using namespace std;
int a[500005],w[500005],x[500005],ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,flag=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int nn=1;nn<=n;nn++){
		int end=1;
		memset(w,-1,sizeof(w));
		for(int i=nn;i<=n;i++){
			if(w[a[i]]==-1){
				w[a[i]]=end;
				x[end]=a[i];
				end++;
			}else{
				for(int j=w[a[i]]+1;j<end;j++){
					w[x[j]]=-1;
				}
				end=w[a[i]]+1;
			}
		}
		for(int i=1;i<end;i++){
			ans[x[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
