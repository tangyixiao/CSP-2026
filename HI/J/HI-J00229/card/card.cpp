#include<bits/stdc++.h>
using namespace std;

int n,m,a[500005],b[300005],c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
		int d=c[a[i]];
		c[a[i]]=i;
		if(b[a[i]]==2){
			map<int,int>mp;
			for(int j=d;j<=i;j++){
				if(mp[a[j]]==0 && a[j]!=a[i]){
					c[a[j]]-=d;
					mp[a[j]]=1;
				}
			}
			b[a[i]]--;
		}
		
	}
	for(int j=1;j<=m;j++)cout<<c[j]<<" ";
}
