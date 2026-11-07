#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int had[300010],ans[300010];
int s[300010];
int k;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	if(n<=5000){
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=m;i++)had[i]=-1;
		for(int i=1;i<=n;i++){
			k=0;
			for(int j=i;j<=n;j++){
				if(had[a[j]]!=-1){
					int h=had[a[j]];
					while(k>=h) had[s[k--]]=-1;
					s[++k]=a[j];
					had[a[j]]=k;
				}else{
					s[++k]=a[j];
					had[a[j]]=k;
				}
			}
			for(int j=1;j<=m;j++){
				if(had[j]!=-1)ans[j]++;
				had[j]=-1;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' ';
		}
	}else{
		for(int i=1;i<=m;i++){
			cout<<n<<' ';
		}
	}
	return 0;
} 
