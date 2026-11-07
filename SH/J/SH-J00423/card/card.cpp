#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+10;
int n,m,a[maxn],la[maxn],ans[maxn],l[maxn],r;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			r++;
			l[r]=a[j];
		}
	}
	for(int i=1;i<=r;i++){
		if(la[a[i]]==0){
			la[a[i]]=i;
			continue;
		}
		for(int j=la[a[i]];j<i;j++){
			if(l[j]==-1) continue;
			ans[a[j]]+=i-j;
			la[a[j]]=0;
			l[j]=-1;
		}
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}
