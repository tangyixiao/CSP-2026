#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card","r",stdin);
	freopen("card","w",stdout);
	int n,m,a;
	cin>>n>>m;
	for(int i = 0;i < n;i++){
		cin>>a;
	}
	if(n % 2 == 0) cout<<n / 2;
	else cout<<(n + 1) / 2;
	return 0;
}