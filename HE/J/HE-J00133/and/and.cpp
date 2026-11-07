#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=2e5+50;

int n,m;
int a[N],f[N];

int32_t main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    f[1]=1;
    for(int i=1;i<=m;i++)
        for(int j=i+1;j<=n;j++)
            f[j]=max(f[j],f[i]&a[j]);
	cout<<f[n];
	return 0;
}
/*

4 2
3 15 12 12

5 3
31 3 1 15 7

*/
