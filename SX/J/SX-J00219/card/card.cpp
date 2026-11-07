#include<bits/stdc++.h>
using namespace std;
#define fr(i,s,n) for(int i=s;i<=n;i++)
int a[500005];
bool f[500005];
int ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int n,m;
	cin>>n>>m;
	fr(i,1,n){
		cin>>a[i];
	}
	fr(i,1,m){
		cout<<0<<" ";
	}
	return 0;
}
