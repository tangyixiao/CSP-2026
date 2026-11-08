#include<bits/stdc++.h>
using namespace std;
//using ll=long long;
#define int long long
int n,m,s[300005],b[500005];
int a[500005],t[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int k=1;
		for(int j=i;j<=n;j++){
			if(t[a[j]]!=0){
				int x=t[a[j]];
				while(k>x){
					k--;
					t[b[k]]=0;
					b[k]=0;
				}
			}
			b[k]=a[j];
			t[a[j]]=k;
			k++;
		}
		for(int j=1;j<=k;j++)s[b[j]]++;
		for(int j=1;j<=m;j++)b[j]=t[j]=0;
	}
	for(int i=1;i<=m;i++)cout<<s[i]<<' ';
	return 0;
}
