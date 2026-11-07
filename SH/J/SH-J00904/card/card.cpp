#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m;
int a[N];
int lst[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		lst[a[i]]=max(lst[a[i]],i);
	}
	for(int i=1;i<=m;i++){
		cout<<lst[i]<<" ";
	}
	return 0;
} 
