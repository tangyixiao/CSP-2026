#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,m,now,x;
ll a[500005],last[300005],poi[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		last[a[i]]=i;
	}
	for(int j=1;j<=n;j++){
		for(int i=j;i<=n;i+=0){
			poi[a[i]]++; 
			i=last[a[i]];
			i++;
		}
	}
	for(int i=1;i<=m;i++) cout<<poi[i]<<" ";
	return 0;
}
