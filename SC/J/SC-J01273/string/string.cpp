#include <bits/stdc++.h>
using namespace std;
int n,a[200010],f[200010];
char c[200010];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	f[1]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	cout<<f[1];
	return 0;
}