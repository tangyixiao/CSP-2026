#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+10,M=3e5+10;
int ne[M];
int n,m,a[N],ans[M];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ne[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int l=i;l<=n;l++){
			int d=a[l];
			int r=ne[d];
			if(l==r)
				ans[d]++;
			else
				l=r-1;
		}
	}
	for(int i=1;i<=m;i++)
		cout<< ans[i] << " ";
}
