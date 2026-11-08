#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+5;
void fast(){
	 ios::sync_with_stdio(0);
	 cin.tie(0),cout.tie(0);
	 return ;
}

struct s{
	ll x,y;
}a[N];
ll b[N];
signed main(){
	fast();
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].x;
		a[i].y=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=j+1;k<=n;k++){
				if(a[j].x!=a[k].x) continue;
				j=k;
			}
			b[a[j].x]++;
		}
	}for(int i=1;i<=m;i++) cout<<b[i]<<' ';
	
	return 0;
} 

