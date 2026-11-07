#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+50;

ll n,m,a[N],ans[N];

vector<ll> b(N);

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		ans[a[i]]++;
		for(int j=i+1;j<=n;j++){
			if(a[j]!=a[j-1])ans[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<'\n';
	}
	
	
	return 0;
}
