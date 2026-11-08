#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[M],b[M],c[N];vector<int> ve;
void f(int l){
	if(l>n) return ;
	int ll=l;
	if(b[c[l]]>=l) ll=b[c[l]]+1,a[c[l]]++;
	f(ll);
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c[i];
		b[c[i]]=i;
	}
	for(int i=1;i<=n;i++) f(i);
	for(int i=1;i<=m;i++) cout<<a[i]<<" ";

    return 0;
}
