#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=5e5+50;

int n,m;
int a[N],q[N];
int r,ans[N];

int32_t main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
    	for(int j=i;j<=n;j++){
    		bool fg=0;
    		for(int k=1;k<=r;k++)
				if(q[k]==a[j]){
				    r=k;
				    fg=1;
					break;
				}
		    if(!fg) q[++r]=a[j];
		}
		for(int j=1;j<=r;j++) ans[q[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}

/*

4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1

*/
