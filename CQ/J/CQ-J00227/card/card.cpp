#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[200005],b[3005],ans[3005];

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int k=1;k<=m;k++)b[k]=0;
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0){
				b[a[j]]=j;
			}else{
				for(int k=b[a[j]]+1;k<j;k++){
					if(a[k]!=a[j])b[a[k]]=0;	
				}
			}
		}
		for(int k=1;k<=m;k++){
			if(b[k]!=0){
				ans[k]++;
			}
		}
	}for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
