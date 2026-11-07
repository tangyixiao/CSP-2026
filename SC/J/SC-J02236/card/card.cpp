#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+10,N=3e5+10;
int n,m,a[MAXN],ans[N],mx[MAXN],nx[MAXN],cnt[N],r[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int f=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];	
		if(i>1&&a[i]<a[i-1])f=0; 
	}
	if(f){
		for(int i=1;i<=n;i++){
			cnt[a[i]]++;
			ans[a[i]]=max(ans[a[i]],i);
		}for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
		return 0;
	} 
	for(int i=n;i;i--){
		nx[i]=i;
		if(r[a[i]])nx[i]=nx[r[a[i]]];
		r[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		int j=i;
		while(j<=n){
			if(mx[a[j]]<i){
				ans[a[j]]++;
				mx[a[j]]++;
			}
			if(nx[j])j=nx[j]+1;
			else j++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';	
	} 

	return 0;
}

