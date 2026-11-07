#include<bits/stdc++.h>
using namespace std;
int a[200010];map<int,int> mp;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mp[a[i]]=i;
	}
	for(int j=1;j<=m;j++){
		cout<<mp[j];
	}
	return 0;
}


