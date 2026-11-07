#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
int a[500005],p[300005],pos[300005];
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pos[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;){
			if(pos[a[j]]!=j)j=pos[a[j]];
			else p[a[j++]]++; 
		}
	}
	for(int i=1;i<=m;i++)cout<<p[i]<<' ';
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--)solve();
	return 0;
}

