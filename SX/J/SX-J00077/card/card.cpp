#include<bits/stdc++.h>
using namespace std;
int M[300005];
int tbegin[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>tbegin[i];
	}
	for(int i=1;i<=n;i++){
		if(tbegin[i]==tbegin[i+1])continue;
		else cout<<i<<' ';
	}
	return 0;
}