#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	if(n==m){
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		return 0;
	}
	
	return 0;
}
