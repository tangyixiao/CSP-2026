#include<bits/stdc++.h>
using namespace std;
#define MAXN (int)1e5+10
#define ld long long
int n,m,k;
int main(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>>n;
	cin>>m;
	for(int i=0;i<=n;i++){
		cin>>k;
		i=i-1;
		if(k)
			i=0;
		else
			k++;
		n=n+1;
		m=n;
	}
	for(int j=0;j<=m;j++){
		cout<<m;
	}
	return 0;
}

