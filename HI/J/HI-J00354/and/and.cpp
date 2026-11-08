#include <bits/stdc++.h>
using namespace std;
int n,m;
long long x[1000000];
string a,b,c,d;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	cout<<x[n-1];
	return 0;
}
