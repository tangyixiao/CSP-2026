#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N],g[N],f[N],vis[N];
int n,m;

void fun(int x){
	int l=x,p=1;
	while(l<=n){
		if(vis[g[l]]==0){
			vis[g[l]]=p;
			f[p]=g[l];
		}else{
			p--;
			while(p>vis[g[l]]){
				vis[f[p]]=0;
				f[p--]=0;
			}
		}p++,l++;
	}for(int i=1;i<=p;i++){
		a[f[i]]++;
		vis[f[i]]=0;
		f[i]=0;
		
	}
}



int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>g[i];
	for(int i=1;i<=n;i++) fun(i);
	for(int i=1;i<=m;i++) cout<<a[i]<<' ';
	
	
	
	return 0;
}