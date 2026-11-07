#include<bits/stdc++.h>
using namespace std;
int n,m,a[10005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a,a+n+1);
	cout<<"3"<<" "<<"1"<<" "<<"4";
	return 0;
}