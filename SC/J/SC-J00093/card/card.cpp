#include<bits/stdc++.h>
using namespace std;

#define int long long
int n,m;
const int N=5e5+10;
int a[N];
int z[N];
int t[N];

signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int cnt=0;
		for(int j=i;j<=n;j++){
			for(int k=1;k<=cnt;k++){
				if(z[k]==a[j]){
					cnt-=cnt-k+1;
					break;
				}
			}
			z[++cnt]=a[j];
		}
		for(int j=1;j<=cnt;j++) t[z[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<t[i]<<" ";
	return 0;
}