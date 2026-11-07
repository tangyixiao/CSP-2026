#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],t[500005],b[500005],k,v[500005];
bool vis[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		k=0;
		for(int j=1;j<=n;j++){
			b[j]=0;
			vis[j]=0;
		}
		for(int j=1;j<=m;j++){
			t[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(!t[a[j]]){
				t[a[j]]=j;
				b[++k]=a[j];
			}
			else{
				for(;k>=0;k--){
					if(b[k]==a[j]){
						break;
					}
					t[b[k]]=0;
				}
			}
		}
		for(int j=1;j<=k;j++){
			v[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<v[i]<<' ';
	}
	return 0;
}