#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL a[200010],n,m,ans=-1,s[200010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cout<<a[i];
	}
	return 0;
} 
