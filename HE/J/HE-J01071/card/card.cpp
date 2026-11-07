#include<bits/stdc++.h>
using namespace std;
int n,m,a;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a;
		cout<<n-i<<' ';
	}
	return 0;
}
