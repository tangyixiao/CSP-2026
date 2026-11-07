#include <bits/stdc++.h>
using namespace std;
int a[200001],zd=0;
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[x]++;
	}
	if(a[2]>0&&a[1]>0)cout<<"1 2 3";
	else if(a[2]>0)cout<<2;
	else if(a[1]>0)cout<<1;
	return 0;
}
