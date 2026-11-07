#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5;
int n,m;
int a[N];
int b[N];
int ans[N];
int tmp[N];
void Solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cout<<1<<' ';
	}
    return ;
}
/*

*/
signed main()
{
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int t=1;
    //cin>>t;
    while(t--) Solve();
    return 0;
}//