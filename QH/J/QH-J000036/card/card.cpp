#include<bits/stdc++.h>
using namespace std;
const int N=5*1e5+10;
int a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	for(int i=1; i<=3; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
