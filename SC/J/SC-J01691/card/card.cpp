#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5005;
int n,m,a[N],ans[N],cnt,t[N];
int q[N], head=1,tail=0;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		tail=0;fill(t+1,t+1+m,0);
		for(int j=i;j<=n;j++){
			if(t[a[j]]==0){
				q[++tail]=a[j];
				t[a[j]]=tail;
			}else{
				for(int k=t[a[j]]+1;k<=tail;k++){
					t[q[k]]=0;
				}
			}
//			cout<<i<<" "<<j<<" "<<"out:\n";
//			for(int i=1;i<=m;i++)cout<<t[i]<<" ";
//			cout<<"\n";
		}
		for(int i=1;i<=m;i++)if(t[i]!=0)ans[i]++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}