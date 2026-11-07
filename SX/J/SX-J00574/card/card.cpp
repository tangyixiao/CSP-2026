#include<bits/stdc++.h>
using namespace std;
const int X=5e5+5;
long long n,m,a[X],b[X];
int main() 
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) if(a[i]!=a[i+1]) cout<<i<<' ';
    return 0;
}