#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[500010],x[300010];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		x[a[i]]++;
	}
	if(m<=2){
		if(a[n]==1)cout<<n<<x[2];
		else cout<<x[1]<<n;
	}
	else for(int i=1;i<=m;i++)x[i]+=x[i-1],cout<<x[i]<<' ';
	return 0;
} 