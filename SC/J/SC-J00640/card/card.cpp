#include<bits/stdc++.h>
using namespace std;
const int N=200005;
 long long n,m,a[N],maxx=-1,t[N],b[N],id[N],tn[N];
bool f;
void dfs(long long l){
	for(int i=1;i<=n;i++){
		b[i]=a[i];
	}
	for(int i=l;i<=n;i++){
		if(id[b[i]]==0){
			id[b[i]]=i;
		}else{
			for(int j=id[b[i]];j<i;j++){
				id[b[j]]=0;
				b[j]=0;
			}
			id[b[i]]=i;
		}
	}
	for(int i=l;i<=n;i++){
		if(b[i]!=0){
			tn[b[i]]++;
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
		t[a[i]]=i;
		if(a[i]<a[i-1]){
			f=1;
		}
	}
	if(f==0){
		for(int i=1;i<=m;i++){
			cout<<t[i]<<" ";
		}	
	}else{
		for(int i=1;i<=n;i++){
			dfs(i);
		}
		for(int i=1;i<=m;i++){
			cout<<tn[i]<<" ";
		}
	}
	return 0;
}